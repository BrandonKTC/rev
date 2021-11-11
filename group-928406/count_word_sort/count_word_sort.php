<?php

function count_word_sort($arg)
{
    
    $x = fopen("$arg", "r");
    $line = fread($x, filesize("$arg"));
    echo $line;
    fclose($x);
}

count_word_sort($arg);

?>