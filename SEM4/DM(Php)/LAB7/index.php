<?php
	require("connection.php");
	$flag=false;
	if(isset($_POST['userName']) && isset($_POST['password'])){
		$userName = $_POST['userName'];
		
		$sql = "select password from php_lab7 where username='".$userName."';";
		$query = $dbhandler->query($sql);
		$r = $query->fetch();
		if($r){
			if($r['password'] == $_POST['password']){
				echo "Welcome ".$userName;
				$flag=true;
			}
		}
	}
	if(!$flag){
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
