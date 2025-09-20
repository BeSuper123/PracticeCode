'''
Description: Function to divide the list into halves, sort each half, then merge them together
Time Complexity: O(n log n)
Author: Blessing Ugochukwu
Date: 20/09/2025
'''

unsortedArr = [2, 8, 5, 1, 4, 6, 3, 9, 7]
print(f"unsorted mergesort: {unsortedArr}")

def mergeSort(arr, left, right):
    if left >= right:
        return
    
    mid = (left + right) // 2 # DIVIDE
    mergeSort(arr, left, mid) # CONQUER
    mergeSort(arr, mid + 1, right) #CONQUER
    merge(arr, left, mid, right) # COMBINE
    
def merge(arr, left, mid, right):
    L = arr[left:mid+1] # first half of array
    R = arr[mid+1:right+1] #  second half of array
    
    i = 0
    j = 0
    k = left
    
    # merging the array back together bit by bit
    while i < len(L) and j < len(R):
        if L[i] <= R[j]:
            arr[k] = L[i]
            i += 1
        else:
            arr[k] = R[j]
            j += 1
        k += 1
        
    # while loop incase there are some elements left inthe array
    while i < len(L):
        arr[k] = L[i]
        i += 1
        k += 1
    
    while j < len(R):
        arr[k] = R[j]
        j += 1
        k += 1
        
# printing the sorted array
mergeSort(unsortedArr, 0, len(unsortedArr) - 1)
print(f"sorted mergesort: {unsortedArr}")
