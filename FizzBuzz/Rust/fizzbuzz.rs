
fn main() {
     //For loop.
    for _i in 1..101 {
        //Check multiple of 3 and 5
        if _i % 5 == 0 && _i % 3 == 0 {
            println!("fizzbuzz");
            continue;
        }
        //Check multiple of 3
        if _i % 3 == 0 {
            println!("fizz");
            continue;
        }
        //Check multiple of 5
        if _i % 5 == 0 {
            println!("buzz");
            continue;
        }
        println!("{:?}", _i);
    }//End for loop.
}