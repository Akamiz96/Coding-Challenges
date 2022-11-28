#include <iostream> 
#include <cstdlib>

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
        std::cerr << "Incorrect number of arguments." << std::endl;
        return 1;
    }

    if (argc <= 1)
    {
        std::cout << "Enter a number to check if it is prime: ";
        std::cin >> number;
    }
    else
    {
        number = atoi(*(argv + 1));
    }

    // Prompt the user with the number to be checked
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "The number to check is: " << number << std::endl;
    std::cout << "-------------------------------------" << std::endl;

    int prime = is_prime(number);

    if (prime == -1)
    {
        std::cout << "-------------------------------------" << std::endl;
        std::cout << "Prime is not define for the number"<< std::endl;
        std::cout << "-------------------------------------" << std::endl;
        return 1;
    }

    if (prime == 1)
    {
        std::cout << "-------------------------------------" << std::endl;
        std::cout << "The number is prime" << std::endl;
        std::cout << "-------------------------------------" << std::endl;
        return 0;
    }
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "The number is not prime" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
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
