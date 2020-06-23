George and Tim are standing on a n*n grid with each grid representing the time of dancing allowed on that grid. They want to dance for exact k time. They are currently in the top left corner of grid and want to travel to bottom right corner. Find the possible ways for George and Tim to their destination. Print -1 if it is not possible. Diaognal traversal is not allowed :)

R = n
C = n

def pathCountRec(mat, m, n, k): 
  
    if m < 0 or n < 0: 
        return 0
    elif m == 0 and n == 0: 
        return k == mat[m][n] 
 
    return (pathCountRec(mat, m-1, n, k-mat[m][n])  
         + pathCountRec(mat, m, n-1, k-mat[m][n])) 
  
def pathCount(mat, k): 
    return pathCountRec(mat, R-1, C-1, k) 
