fizzbuzz()

function fizzbuzz(params) {
    for (let i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            console.log("fizzbuzz")
            continue
        }
        if (i % 3 == 0) {
            console.log("fizz")
            continue
        }
        if (i % 5 == 0) {
            console.log("buzz")
            continue
        }
        console.log(i)
    }
}