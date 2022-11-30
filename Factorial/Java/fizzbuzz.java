package Factorial.Java;

/**
 * fizzbuzz
 */
public class fizzbuzz {

    public static void main(String[] args) {
        fizzbuzz_func();
    }

    private static void fizzbuzz_func() {
        //For loop.
        for (int i = 1; i <= 100; i++) {
            //Check multiple of 3 and 5
            if (i % 5 == 0 && i % 3 == 0) {
                System.out.println("fizzbuzz");
                continue;
            }
            //Check multiple of 3 
            if (i % 3 == 0) {
                System.out.println("fizz");
                continue;
            }
            //Check multiple of 5
            if (i % 5 == 0) {
                System.out.println("buzz");
                continue;
            }
            System.out.println(i);
        }//End for loop.
    }
}