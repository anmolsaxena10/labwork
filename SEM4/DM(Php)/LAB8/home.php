<html>
<head>
	<title> Birthday reminders! </title>
</head>

<body>
	<?php
	session_start();
	if(isset($_SESSION['uname']))
	{
		$nm=$_SESSION['uname'];
		echo "<table border=\"1\"><tr><td colspan='2'><a href='home.php'>Home</a><a href='signout.php'>&nbsp;&nbsp;&nbsp;&nbsp;Signout</a></td></tr><tr><td colspan='2'><h3>Welcome <i><u> $nm </i></u></h3></td></tr>";
		echo "<tr><td colspan=\"2\"><ol><li><a href=\"set.php\">Set reminder</a><br/><li><a href=\"notify.php\">Show reminders</a></li></li></ol></td></tr>";
		echo "<tr><td colspan='2' align='center' style='color:#00b200'>";
			if(isset($_GET['msg1']))
				echo $_GET['msg1'];
			else
				echo "One India, Green India!!!";
		echo "</td></tr>";				
		echo "</table>";
		
	}
	else
	{
		header("location:index.php?msg1=Please Login to View Your Home Screen!");
		echo "Invalid Reference to that page";
	}
	?>
</body>
</html>