<?php 
function oddeven()
{
    echo"Even number by to 1to 50:"."\n";
    for($i=1;$i<=50;$i++)
    {
        if($i%2==0)
        {
            echo"even number :".$i.""."\n";
        }
    }
    echo"odd number by to 1to 50:"."\n";
    for($i=1;$i<=50;$i++)
    {
        if($i%2!=0)
        {
            echo"odd number :".$i.""."\n";
        }
    }
}
oddeven(); 
?>