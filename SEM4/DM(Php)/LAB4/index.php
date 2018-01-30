<?php
	if(isset($_POST['userName']) && isset($_POST['password'])){
		echo 'User Name: '.$_POST['userName'].'<br>';
		echo 'Password: '.$_POST['password'].'<br>';
	}
	else{
?>

<html>
<head><title>Login</title></head>
<body>
	<h1>Login</h1>
	<form method="POST">
		<table>
			<tr>
				<td>Username: </td>
				<td><input type="text" name="userName"></td>	
			</tr>
			<tr>
				<td>Password: </td>
				<td><input type="password" name="password"></td>	
			</tr>
			<tr>
				<td><input type="submit"></td>
				<td><input type="reset"></td>	
			</tr>
			<tr>
				<td><a href="registration.php">New User</a></td>	
			</tr>
		</table>
	</form>
</body>

</html>

<?php } ?>
