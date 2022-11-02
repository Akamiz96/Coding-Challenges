def fizzbuzz():
    for i in range(1,101):
        if i % 3 == 0 and i % 5 == 0:
            print("fizzbuzz")
            continue
        if i % 3 == 0:
            print("fizz")
            continue
        if i % 5 == 0:
            print("buzz")
            continue
        print(i)

if __name__ == "__main__":
    fizzbuzz()

