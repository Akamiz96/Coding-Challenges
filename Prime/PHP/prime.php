<?php

$number = (int)readline('Enter an integer: ');
$prime = is_prime($number);

if ($prime == -1) {
    echo("-------------------------------------\n");
    echo("Prime is not define for the number\n");
    echo("-------------------------------------\n");
    return 1;
  }
  if ($prime == 1) {
    echo("-------------------------------------\n");
    echo("The number is prime\n");
    echo("-------------------------------------\n");
    return 0;
  }
  echo("-------------------------------------\n");
  echo("The number is not prime\n");
  echo("-------------------------------------\n");
  return 0;

function is_prime($number){
    if ($number < 2) {
        return -1;
    }

    // For loop.
    for ($i = 2; $i < $number; $i++) {
        if ($number % $i == 0) {
            return 0;
        }
    } // End for loop.
    return 1;
}
