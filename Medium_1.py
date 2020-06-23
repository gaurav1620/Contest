maximum number of ways of coin changes till a given number with types of coins available.
For example, if you have 4 types of coins, and the value of each type is given as {8, 3, 1, 2} respectively, you can make change for 3 units in three ways: {1,1,1}, {1 , 2} and {3}.


# Source Hackerrank - We can change the wording for the problem

def getWays(n, c):
    table = [0] * (n+1)
    table[0]=1
    for coin in c:
        for i in range(coin, n + 1):
                table[i] = table[i]+ table[i - coin]
    print(table) 
    return max(table)

