package main

import "fmt"

func main() {
	var (
		number int
		prime  int
	)
	fmt.Println("-------------------------------------")
	fmt.Println("Enter a number to check if it is prime: ")
	fmt.Scan(&number)

	prime = is_prime(number)

	if prime == -1 {
		fmt.Println("-------------------------------------")
		fmt.Println("Prime is not define for the number")
		fmt.Println("-------------------------------------")
		return
	}

	if prime == 1 {
		fmt.Println("-------------------------------------")
		fmt.Println("The number is prime")
		fmt.Println("-------------------------------------")
		return
	}

	fmt.Println("-------------------------------------")
	fmt.Println("The number is not prime")
	fmt.Println("-------------------------------------")
}

/*
   Function to determine if a number is prime
   - number: integer number to be evaluated
   - return:
       - -1 if number is less than 2
       - 0 if number is not a prime number
       - 1 if number is a prime number
*/
func is_prime(number int) (prime int) {
	prime = 1
	if number < 2 {
		prime = -1
		return
	}

	// For loop.
	for i := 2; i < number; i++ {
		if number%i == 0 {
			prime = 0
			return
		}
	} // End for loop.
	return
}
