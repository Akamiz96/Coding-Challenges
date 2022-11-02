package main

import "fmt"

func main() {
	//For loop.
	for i := 1; i <= 100; i++ {
		//Check multiple of 3 and 5
		if i%3 == 0 && i%5 == 0 {
			fmt.Println("fizzbuzz")
			continue
		}
		//Check multiple of 3
		if i%3 == 0 {
			fmt.Println("fizz")
			continue
		}
		//Check multiple of 5
		if i%5 == 0 {
			fmt.Println("buzz")
			continue
		}
		fmt.Println(i)
	} //End for loop.
}
