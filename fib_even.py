def first_fib_even(number: int) -> list:
    fib = []
    fib.append(0)
    fib.append(1)
    for i in range(2, number):
        fib.append(fib[i - 1] + fib[i - 2])

    fib = [i for i in fib if i % 2 == 0]
 
    return fib


def second_fib_even(number: int) -> list:
    first_fib = 0
    second_fib = 1
    evens = [first_fib]
    for i in range(number - 1):
        first_fib, second_fib = second_fib, first_fib + second_fib
        if second_fib % 2 == 0:
            evens.append(second_fib)
            
    return evens


if __name__ == '__main__':
    number = int(input())
    print(first_fib_even(number))
    print(second_fib_even(number))