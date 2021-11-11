<?php

function is_negative($x)
{
    if (is_numeric($x))
    {
        if ($x < 0)
        {
            echo "True\n";
        }
        else 
        {
            echo "False\n";
        }
    }
    else 
    {
        echo "Le parametre n'est pas un Int\n";
    }
}
?>