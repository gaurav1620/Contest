


#https://www.hackerrank.com/challenges/ctci-fibonacci-numbers/problem
#hackerrank war aahe ha problem , tyachat n = 30 max ahe ani to fit hoto
#karan 2 power 30 = 1073741824 which is close to 10 power 8


#this gives TLE
dp = [-1 for i in range(100)]

def fib(f,s,n):
    if dp[n] != -1:
        return dp[n]
    if n == 1:
        return f
    if n == 2:
        return s
    dp[n] =  fib(f,s,n-1)+fib(f,s,n-2)
    return dp[n]

print(fib(53,24,70))
