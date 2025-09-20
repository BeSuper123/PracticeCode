'''
Description: Function to repeatedly swap neighbouring elements if they're in the wrong order
Time Complexity: O(n^2)
Author: Blessing Ugochukwu
Date: 20/09/2025
'''

arr = [2, 8, 5, 1, 4, 6, 3, 9, 7]


def bubbleSort(arr):
    print(f"unsorted bubblesort: {arr}")
    n = len(arr)

    for i in range(n - 1):
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                holder = arr[j]
                holder2 = arr[j + 1]
                arr[j + 1] = holder
                arr[j] = holder2
        
    return f"sorted bubblesort: {arr}"

print(bubbleSort(arr))
