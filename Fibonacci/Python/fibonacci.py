# Define a max for the loop
MAX = 20

def fibonacci():
    num_1 = 1
    num_2 = 0
    print(num_2)
    print(num_1)
    # For loop.
    for i in range(2,MAX):
        # x = x(-1) + x(-2)
        num_3 = num_1 + num_2
        # Print it
        print(num_3)
        # Change values to the right variables
        num_2 = num_1
        num_1 = num_3
    # End for loop

if __name__ == "__main__":
    fibonacci()

