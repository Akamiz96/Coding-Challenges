#include <iostream> 
// Define a max for the loop
#define MAX 20

int main()
{
    int num_1 = 1, num_2 = 0, num_3;
    std::cout << num_2 << std::endl;
    std::cout << num_1 << std::endl;
    //For loop.
    for (int i = 2; i <= MAX; i++)
    {
        // x = x(-1) + x(-2)
        num_3 = num_1 + num_2;
        // Print it
        std::cout << num_3 << std::endl;
        // Change values to the right variables
        num_2 = num_1;
        num_1 = num_3; 
    }//End for loop.
    
    return 0;
}
