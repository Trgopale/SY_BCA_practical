<?php
class car{
    function __construct(){
        echo "default constructor called\n";

    }
    function message(){
        echo "Message Method is called\n";
    }
}
class kia extends car
{
    public function display(){
    echo "display function is called\n";
     }
  }
    $obj=new kia();
    $obj-> display();
    $obj-> message();
    ?>