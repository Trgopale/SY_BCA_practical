<?php
$n=123;
$temp=$n;
while($n>0)
{
    $r=$n%10;
    $revs=$revs*10+$r;
    $n=(int)$n/10;
}
echo"revs number of$temp is $revs"
?>