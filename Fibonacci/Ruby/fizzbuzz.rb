MAX = 20
# fibonacci function
def fibonacci
    num_1 = 1
    num_2 = 0
    puts num_2
    puts num_1
    # For loop
    for i in 2...MAX do
        # x = x(-1) + x(-2)
        num_3 = num_1 + num_2
        # Print it
        puts num_3
        # Change values to the right variables
        num_2 = num_1
        num_1 = num_3
    end # End for loop.
end

fibonacci()