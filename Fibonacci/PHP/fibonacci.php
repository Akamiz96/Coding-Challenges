<?php
    $num_1 = 1;
    $num_2 = 0;
    printf("%u\n", $num_2);
    printf("%u\n", $num_1);
    //For loop.
    for ($i=2; $i <= 20; $i++) { 
        // x = x(-1) + x(-2)
        $num_3 = $num_1 + $num_2;
        // Print it
        printf("%u\n", $num_3);
        // Change values to the right variables
        $num_2 = $num_1;
        $num_1 = $num_3;
    }//End for loop.
?>