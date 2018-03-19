<?php

if(isset($_POST['username']))$username=$_POST['username'];else $username="DefaultUser";

if (!file_exists('upload')) 
{
    mkdir('upload', 0777, true);
}

if(!empty($_FILES["myFile"]["name"]))
	{
		$target_location="home/user1/web/tvr/LAB9/upload/".basename($_FILES["myFile"]["name"]);
		if(! (move_uploaded_file($_FILES["myFile"]["tmp_name"], $target_location)))
			echo "Error: " . $_FILES["myFile"]["error"] . "<br>";
		else
		{
			$ext = pathinfo($target_location, PATHINFO_EXTENSION);
			$new="home/user1/web/tvr/LAB9/upload/".$username.".".$ext;
			rename($target_location,$new);
			header("Location:fileForm.php?msg=Congrats $username, Your File is Successfully Uploaded.");
			
		}
	}
?>
