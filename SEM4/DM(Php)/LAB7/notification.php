<?php

	if(isset($_POST['userName']) && isset($_POST['password1']) && isset($_POST['password2']) && isset($_POST['gender']) && isset($_POST['dob']) && !empty($_POST['interest'])){
		
		$userName = $_POST['userName'];
		$password1 = $_POST['password1'];
		$password2 = $_POST['password2'];
		$gender = $_POST['gender'];
		$date = $_POST['dob'];
		$date = strtotime($date);
		$date = date("Y-m-d",$date);
		$interest = $_POST['interest'];
		$placement=0;
		$training=0;
		$achievements = $_POST['achievements'];
		foreach($interest as $i=>$value){
			if($value == "Placement"){
				$placement = 1;
			}
			else if($value == "Training"){
				$training = 1;
			}
		}
		
		
		if(strlen($userName) < 11){
			echo'Invalid User Name';
			include('registration.php');
		}
		elseif(strcmp($password1,$password2) != 0 || strlen($password1)==0 || strlen($password2)==0){
			echo 'Invalid Password';
			include('registration.php');
		}
		else{
			require("connection.php");

			try{
				$sql = "insert into php_lab7 (username, password, gender, dob, placement, training, achievements)
		values('".$userName."', '".$password1."', '".$gender."', '".$date."', '".$placement."', '".$training."', '".$achievements."');";
			
				$query = $dbhandler->query($sql);
			}
			catch(PDOException $e){
				echo $e->getMessage();				
				die();
			}
			
			echo '<h1>Successfully Registered</h1>';
			echo '<br><br>User Name :'.$userName;
			echo '<br>Gender :'.$gender;
			echo '<br>Date of Brth :'.$date;
			echo '<br>Interest :';
			for($i=0 ; $i<sizeof($interest) ; $i++){
				echo $interest[$i].', ';
			}
			echo '<br><a href="index.php"><button>Home</button>';
		}
	}
	else{
		echo'Please enter all the details';
		include('registration.php');
	}

?>
