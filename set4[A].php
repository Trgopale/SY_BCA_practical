<?php
    function cals($a,$b,$c)
    {
        $x=($a*$b)+$c;
        return $x;
    }
    $a=10;
    $b=20;
    $c=30;
    $x=cals($a,$b,$c);
    echo "X is :".$x;
?>