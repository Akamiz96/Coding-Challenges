const readline = require("readline");

// create interface for input and output
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

rl.question("Enter a Value: \n", function (int) {
  userInput = int;

  console.log("Your number is " + userInput);

  // close input stream
  rl.close();

  prime(userInput)
});

function prime(x) {
  var number = parseInt(x);
  var prime = is_prime(number);
  if (prime == -1) {
    console.log("-------------------------------------");
    console.log("Prime is not define for the number");
    console.log("-------------------------------------");
    return 1;
  }
  if (prime == 1) {
    console.log("-------------------------------------");
    console.log("The number is prime");
    console.log("-------------------------------------");
    return 0;
  }
  console.log("-------------------------------------");
  console.log("The number is not prime");
  console.log("-------------------------------------");
  return 0;
}

function is_prime(number) {
  if (number < 2) {
    return -1;
  }

  // For loop.
  for (var i = 2; i < number; i++) {
    if (number % i == 0) {
      return 0;
    }
  } // End for loop.
  return 1;
}
