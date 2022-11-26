package Fibonacci.Java;

/**
 * fibonacci
 */
public class fibonacci {

    private static int MAX = 20;

    public static void main(String[] args) {
        fibonacci_func();
    }

    private static void fibonacci_func() {
        int num_1 = 1, num_2 = 0, num_3;
        System.out.println(num_2);
        System.out.println(num_1);
        //For loop.
        for (int i = 2; i <= MAX; i++) {
            // x = x(-1) + x(-2)
            num_3 = num_1 + num_2;
            // Print it
            System.out.println(num_3);
            // Change values to the right variables
            num_2 = num_1;
            num_1 = num_3;
        }//End for loop.
    }
}