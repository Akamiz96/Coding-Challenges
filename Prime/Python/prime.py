""" Function to determine if a number is prime 
- number: integer number to be evaluated 
- return: 
    - -1 if number is less than 2 
    - 0 if number is not a prime number
    - 1 if number is a prime number """
    
def is_prime(number):
    if number < 2:
        return -1
    # For loop.
    for i in range(2,number):
        if number % i == 0:
            return 0
    return 1

if __name__ == "__main__":
    number = int(input("Enter a number: "))
    prime = is_prime(number)
    if prime == -1:
        print( "-------------------------------------" )
        print( "Prime is not define for the number")
        print( "-------------------------------------" )
        exit(1)

    if prime == 1:
        print( "-------------------------------------" )
        print( "The number is prime" )
        print( "-------------------------------------" )
        exit(0)
    print( "-------------------------------------" )
    print( "The number is not prime" )
    print( "-------------------------------------" )
    exit(0)

