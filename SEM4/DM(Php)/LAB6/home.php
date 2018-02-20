<?php

	session_start();
	
	if(!isset($_SESSION['username'])){
		header("location: index.php?msg=Please Login to view your Home Screen");
	}
	
	$message = "Our India, Green India";
	
	if(isset($_GET['msg'])){
		$message = $_GET['msg'];
	}
?>

<html>
<head><title>Home</title></head>

<body>
		<table border=1>
			<tr><td><a href="#">Home</a>&nbsp;&nbsp;<a href="signout.php">SignOut</a></td><tr>
			<tr>
				<td>Welcome <?php echo $_SESSION['username']; ?></td>
			</tr>
			<tr>
				<td>1)<a href="set.php">Set Reminder</a>
				<br>2)<a href="notify.php">Show Reminders</a>
				</td>
			</tr>
			<tr>
				<td><?php echo $message; ?></td>
			</tr>
		</table>
</body>

</html>
