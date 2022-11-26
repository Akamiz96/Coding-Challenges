fizzbuzz()

function fizzbuzz(params) {
    num_1 = 1, num_2 = 0
    console.log(num_2)
    console.log(num_1)
    for (let i = 2; i <= 20; i++) {
        // x = x(-1) + x(-2)
        num_3 = num_1 + num_2;
        // Print it
        console.log(num_3);
        // Change values to the right variables
        num_2 = num_1;
        num_1 = num_3;
    }
}