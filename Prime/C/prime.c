#include <stdio.h>
#include <stdlib.h>

/*
    Function to determine if a number is prime 
    - number: integer number to be evaluated 
    - return: 
        - -1 if number is less than 2 
        - 0 if number is not a prime number
        - 1 if number is a prime number
*/
int is_prime(int number);

int main(int argc, char const *argv[])
{
    // Variable for the number to prime check
    int number;

    // Check the number of arguments of the program
    /*
    - If the number to check doesn't come as a parameter, the program ask for one
    - If the number to check comes as a parameter, the number is stored in the variable
    - Any other case the program is terminated
    */
    if (argc > 2)
    {
        fprintf(stderr, "%s", "Incorrect number of arguments.\n");
        exit(1);
    }

    if (argc <= 1)
    {
        printf("Enter a number to check if it is prime: \n");
        scanf("%d", &number);
    }
    else
    {
        number = atoi(*(argv + 1));
    }

    // Prompt the user with the number to be checked
    printf("-------------------------------------\n");
    printf("The number to check is: %d\n", number);
    printf("-------------------------------------\n");

    int prime = is_prime(number);

    if (prime == -1)
    {
        printf("-------------------------------------\n");
        printf("Prime is not define for the number\n");
        printf("-------------------------------------\n");
        return 1;
    }

    if (prime == 1)
    {
        printf("-------------------------------------\n");
        printf("The number is prime\n");
        printf("-------------------------------------\n");
        return 0;
    }
    printf("-------------------------------------\n");
    printf("The number is not prime\n");
    printf("-------------------------------------\n");
    return 0;
}

/*
    Function to determine if a number is prime 
    - number: integer number to be evaluated 
    - return: 
        - -1 if number is less than 2 
        - 0 if number is not a prime number
        - 1 if number is a prime number
*/
int is_prime(int number)
{
    if (number < 2)
    {
        return -1;
    }

    // For loop.
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return 0;
        }

    } // End for loop.
    return 1;
}
