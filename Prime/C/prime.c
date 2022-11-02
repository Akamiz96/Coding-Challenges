#include <stdio.h>
// Define a max for the loop
#define MAX 100 

int main(int argc, char const *argv[])
{
    //For loop.
    for (int i = 1; i <= MAX; i++)
    {
        //Check multiple of 3 and 5
        if(i % 3 == 0 && i % 5 == 0){
            printf("fizzbuzz\n");
            continue;
        }
        //Check multiple of 3 
        if(i % 3 == 0){
            printf("fizz\n");
            continue;
        }
        //Check multiple of 5
        if(i % 5 == 0){
            printf("buzz\n");
            continue;
        }
        printf("%i\n",i);
    }//End for loop.
    return 0;
}
