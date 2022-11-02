<?php
    //For loop.
    for ($i=1; $i < 101; $i++) { 
        //Check multiple of 3 and 5
        if ($i % 5 == 0 && $i % 3 == 0) {
            print("fizzbuzz\n");
            continue;
        }
        //Check multiple of 3
        if ($i % 3 == 0) {
            print("fizz\n");
            continue;
        }
        //Check multiple of 5
        if ($i % 5 == 0) {
            print("buzz\n");
            continue;
        }
        printf("%u\n", $i);
    }//End for loop.
?>