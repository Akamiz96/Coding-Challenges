package Prime.Java;

import java.util.Scanner;

/**
 * prime
 */
public class prime {

    public static void main(String[] args) {
        prime_func();
    }

    private static void prime_func() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number to check if it is prime: ");
        int number = sc.nextInt();
        sc.close();
        int prime = is_prime(number);
        if (prime == -1) {
            System.out.println("-------------------------------------");
            System.out.println("Prime is not define for the number");
            System.out.println("-------------------------------------");
            System.exit(1);
        }
        if (prime == 1) {
            System.out.println("-------------------------------------");
            System.out.println("The number is prime");
            System.out.println("-------------------------------------");
            System.exit(0);
        }
        System.out.println("-------------------------------------");
        System.out.println("The number is not prime");
        System.out.println("-------------------------------------");
        System.exit(0);
    }
    
    /*
     * Function to determine if a number is prime
     * 
     * @param number integer number to be evaluated
     * 
     * @return:
     * - -1 if number is less than 2
     * - 0 if number is not a prime number
     * - 1 if number is a prime number
     */
    private static int is_prime(int number) {
        if (number < 2) {
            return -1;
        }

        // For loop.
        for (int i = 2; i < number; i++) {
            if (number % i == 0) {
                return 0;
            }

        } // End for loop.
        return 1;
    }
}