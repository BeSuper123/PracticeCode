A = [1, 8, 2, 6, 4, 3, 7, 9, 2, 4, 6, 2, 8, 9, 3, 5, 7, 3, 8, 5]
i = 0
N = len(A)
max = A[0]
maxFirst = A[0]
maxlast = A[0]

    
while i < N:
    if A[i] > max:
        max = A[i]
        maxFirst = i
        maxlast = i
    elif A[i] == max:
        maxlast = i
    i = i + 1
    
print("Max: ", max)
print("\nFirst Occurence --> ", maxFirst)
print("Last Occurence --> ", maxlast)
        