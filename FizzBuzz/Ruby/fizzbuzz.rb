# fizzbuzz function
def fizzbuzz
    # For loop
    for i in 1...101 do
        # Check multiple of 3 and 5
        if i % 3 == 0 && i % 5 == 0
            puts "fizzbuzz"
            next
        end
        # Check multiple of 3 
        if i % 3 == 0
            puts "fizz"
            next  
        end
        # Check multiple of 5
        if i % 5 == 0
            puts "buzz"
            next  
        end
        puts i
    end # End for loop.
end

fizzbuzz()