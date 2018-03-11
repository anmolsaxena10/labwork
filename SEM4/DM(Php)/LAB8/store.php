<?php

session_start();
	if(isset($_SESSION['uname']))
	{
		require('connection.php');
		$nm=$_SESSION['uname'];
		$name = $_POST['name'];
		$date = strtotime($_POST['date']);
		$date = date('Y-m-d', $date);
		//setcookie($name,$date,time()+31622400);
		$today = date('Y-m-d');
		
		$query=$dbhandler->prepare("insert into birthdays values(?,?);");
                $query->execute(array($name,$date));
		
		
		header("location:home.php?msg1=Reminder is set!");
		
	}
	else
	{
		header("location:index.php?msg=Please Login to View Your Home Screen!");
		echo "Invalid Reference to that page";
	}




?>
