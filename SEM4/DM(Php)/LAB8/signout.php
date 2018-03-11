<html>
<head></head>
<body>
	<?php
	session_start();
	if(isset($_SESSION['uname']))
	{
		unset($_SESSION['uname']);
		header("location:index.php?msg=You have sucessfully Logout");
	}
	else
	{
		header("location:index.php?msg=Please Login First");
	}
		
	
	?>
</body>
</html>