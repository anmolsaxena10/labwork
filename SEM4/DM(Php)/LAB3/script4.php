<table border='1'>
	<?php for($i=0 ; $i<8 ; $i++){ ?>
		<tr>
			<?php for($j=0 ; $j<8 ; $j++){ ?>
				<td <?php if($i%2!=0 && $j%2==0){echo 'style="background-color:black;"';}
							else if($i%2==0 && $j%2!=0){echo 'style="background-color:black;"';}
					?> height='30' width='30'></td>
			<?php } ?>
		</tr>
	<?php } ?>
</table>
