#include <iostream> 
// Define a max for the loop
#define MAX 100

int main()
{
    //For loop.
    for (int i = 1; i <= MAX; i++)
    {
        //Check multiple of 3 and 5
        if(i % 3 == 0 && i % 5 == 0){
            std::cout << "fizzbuzz" << std::endl;
            continue;
        }
        //Check multiple of 3 
        if(i % 3 == 0){
            std::cout << "fizz" << std::endl;
            continue;
        }
        //Check multiple of 5
        if(i % 5 == 0){
            std::cout << "buzz" << std::endl;
            continue;
        }
        std::cout << i << std::endl;
    }//End for loop.
    
    return 0;
}
