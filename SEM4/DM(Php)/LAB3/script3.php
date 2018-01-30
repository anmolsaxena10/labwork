<form>
	DOB<input type="date" name='dob'>
	<input type="submit">
</form>
<?php
	if(isset($_GET['dob'])){
		$bDate = date_create($_GET['dob']);
		$pDate = date_create(date("Y-m-d"));
		print_r($bDate);
		echo '<br>';
		print_r($pDate);
		echo '<br>';
		print_r(date_diff($bDate,$pDate));
	}
?>
