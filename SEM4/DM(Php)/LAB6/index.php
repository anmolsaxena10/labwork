<?php
	$message = "Our India, Clean India";
	$username = "user1";
	$password = "user1";
	
	if(isset($_GET['msg'])){
		$message = $_GET['msg'];
	}
	
	if(isset($_POST['username']) && isset($_POST['password'])){
		if($username ==$_POST['username'] && $password == $_POST['password']){
			session_start();
			$_SESSION['username'] = $username;
			header("location: home.php");
		}
		else{
			$message = "INVALID LOGIN DETAILS";
		}
	}
?>

<html>
<head><title>Login</title></head>

<body>
	<form method="POST">
		<table border=1>
			<tr colspan=2><td><?php echo $message; ?></td><tr>
			<tr>
				<td>UserName:</td>
				<td><input type="text" name="username"></td>
			</tr>
			<tr>
				<td>PassWord:</td>
				<td><input type="password" name="password"></td>
			</tr>
			<tr>
				<td><input type="reset"></td>
				<td><input type="submit"></td>
			</tr>
		</table>
	</form>
</body>

</html>
