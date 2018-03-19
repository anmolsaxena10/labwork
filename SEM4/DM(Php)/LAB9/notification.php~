<?php

	if(isset($_POST['userName']) && isset($_POST['password1']) && isset($_POST['password2']) && isset($_POST['gender']) && isset($_POST['dob']) && !empty($_POST['interest'])){

		
		$userName = $_POST['userName'];
		$password1 = $_POST['password1'];
		$password2 = $_POST['password2'];
		$gender = $_POST['gender'];
		$dob = $_POST['dob'];
		$interest = $_POST['interest'];
		
		if(strlen($userName) < 11){
			echo'Invalid User Name';
			include('registration.php');
		}
		elseif(strcmp($password1,$password2) != 0 || strlen($password1)==0 || strlen($password2)==0){
			echo 'Invalid Password';
			include('registration.php');
		}
		else{
		
			if(!empty($_FILES['myFile']['name'])){
				$target_location="/home/user1/web/ce107/LAB9/uploads/".basename($_FILES["myFile"]["name"]);
				if ($_FILES["myFile"]["size"] > 300000) {
    					echo "Sorry, your file is too large.";
    					include('registration.php');

				}
				else{
					$imageFileType = strtolower(pathinfo($target_location,PATHINFO_EXTENSION));
					if($imageFileType != "jpg" && $imageFileType != "png" && $imageFileType != "jpeg" && $imageFileType != "gif" ) {
    						echo "Sorry, only JPG, JPEG, PNG & GIF files are allowed.";
    						include('registration.php');
					}
					else{
						if (move_uploaded_file($_FILES["myFile"]["tmp_name"], $target_location)) {
        						echo "The file ". basename( $_FILES["myFile"]["name"]). " has been uploaded.";
    							
    							$ext = pathinfo($target_location, PATHINFO_EXTENSION);
							$new="/home/user1/web/ce107/LAB9/uploads/".$userName.".".$ext;
							rename($target_location,$new);
							echo " Your File is Successfully Uploaded.";
    							
							echo '<h1>Successfully Registered</h1>';
							echo '<br><br>User Name :'.$userName;
							echo '<br>Gender :'.$gender;
							echo '<br>Date of Brth :'.$dob;
							echo '<br>Interest :';
							for($i=0 ; $i<sizeof($interest) ; $i++){
								echo $interest[$i].', ';
							}
							<br>
							echo "<img src='uploads/".$userName.".".$ext."'>";
							echo '<br><a href="index.php"><button>Home</button>';
    						}
    						else{
        						echo "Sorry, there was an error uploading your file.";
    							include('registration.php');
    						}
					}
				}
			}
			else{
				echo "Please select a file";
				include('registration.php');
			}
		}
	}
	else{
		echo'Please enter all the details';
		include('registration.php');
	}

?>
