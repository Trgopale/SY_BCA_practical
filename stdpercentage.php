<?php
    $percentage = 63;
    switch($percentage){
        case($percentage > 70) : echo"First class with Distinction"; break;
        case($percentage > 60 && $percentage <=70) : echo"First class"; break;
        case($percentage > 50 && $percentage <=60) : echo"Higher Second class"; break;
        case($percentage > 40 && $percentage <=50) : echo"Pass Class"; break;
        default; echo"Fail";
    }
?>