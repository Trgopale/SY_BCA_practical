<?php
$leapYr = 365;
if($leapYr % 4 == 0 && $leapYr % 100 != 0 || $leapYr % 400 != 0){
    echo"Leap Year";
}
else{
    echo"Not leap year";
}
?>