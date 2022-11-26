package main

import "fmt"

const MAX = 20

func main() {
	num_2 := 0
	num_1 := 1
	fmt.Println(num_2)
	fmt.Println(num_1)
	//For loop.
	for i := 2; i <= MAX; i++ {
		// x = x(-1) + x(-2)
		num_3 := num_1 + num_2
		// Print it
		fmt.Println(num_3)
		// Change values to he right variables
		num_2 = num_1
		num_1 = num_3
	} //End for loop.
}
