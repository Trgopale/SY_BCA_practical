<?php
$n=4;
$flag=1;
for ($i=0; $i <n ; $i++) 
{ 
  if ($n %$i==0) 
  {
    $flag=0;break;
  }  
}
if ($flag==0) 
{
    echo"prime no";
} else 
{
    echo"not prime";
}
?>