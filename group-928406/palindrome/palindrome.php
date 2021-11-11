<?php

    function palindrome($chaine)
    {
        $compteur = 0;
        while(isset($chaine[$compteur]))
        {
            $compteur++;
        }

        $outputString = str_replace(" ", "", $chaine, $compteur); 
        $outputString = strtolower($outputString);
        $reverse = strrev($outputString);
        
        if ($outputString != $reverse)
        {
            echo "False\n";
        }
        else
        {
            echo "True\n";
        }
    }
?>