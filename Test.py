


def fib(f,s,n):
    if n == 1:
        return f
    if n == 2:
        return s

    return fib(f,s,n-1)+fib(f,s,n-2)

fib(10,20,50)
