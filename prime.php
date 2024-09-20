<?php
    $n=3;
    $flage=0;
    for ($i=2; $i<$n; $i++) 
    { 
        if ($n%$i==0) 
        {
            $flage=1;
            break;
        }
    }
    if ($flage==0)
        echo"No is prime";
    else
    echo"No is not prime";
