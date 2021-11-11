<?php


function calc($op = '0', $number = 0)
{
    static $x = 0;

    switch($op)
    {
        case('0') : 
            return $x;

        case ('+') :
            $x = $x + $number;
            return $x;

        case ('*') : 
            $x = $x * $number;
            return $x;

        case ('=') :
            $x = $number;
            return $x;

        case ('/') :
            if ($number == 0)
            {
                echo "Division by 0!\n";
                break;
            }
            else
            {
                $x = $x / $number;
                return $x;
            } 

        case ('%') : 
            if ($number == 0)
            {
                echo "Division by 0!\n";
                break;
            }
            else
            {
                $x = $x % $number;
                return $x;
            }
    }
}


?>