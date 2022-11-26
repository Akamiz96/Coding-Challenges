#include <stdio.h>
// Define a max for the loop (Number of terms)
#define MAX 20 

int main(int argc, char const *argv[])
{
    int num_1 = 1, num_2 = 0, num_3; 
    printf("%d\n",num_2);
    printf("%d\n",num_1);
    //For loop.
    for (int i = 2; i <= MAX; i++)
    {
        // x = x(-1) + x(-2)
        num_3 = num_1 + num_2;
        // Print it
        printf("%d\n",num_3);
        // Change values to the right variables
        num_2 = num_1;
        num_1 = num_3;
    }//End for loop.
    return 0;
}
