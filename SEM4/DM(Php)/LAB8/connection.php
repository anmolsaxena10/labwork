<?php
$dbhandler;
try{
	$dbhandler = new PDO('mysql:host=127.0.0.1;dbname=ce107','ce107','ce107');
	echo "Connection is established...<br/>";
	$dbhandler->setAttribute(PDO::ATTR_ERRMODE,PDO::ERRMODE_EXCEPTION);
}
catch(PDOException $e){
	echo $e->getMessage();
	die("Database Connection Problem");
}
?>
