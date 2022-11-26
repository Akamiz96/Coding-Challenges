
fn main() {
    let max = 20;
    let mut num_1 = 1;
    let mut num_2 = 0;
    println!("{:?}", num_2);
    println!("{:?}", num_1);
     //For loop.
    for _i in 2..max {
        // x = x(-1) + x(-2)
        let num_3 = num_1 + num_2;
        // Print it
        println!("{:?}", num_3);
        // Change values to the right variables
        num_2 = num_1;
        num_1 = num_3;
    }//End for loop.
}