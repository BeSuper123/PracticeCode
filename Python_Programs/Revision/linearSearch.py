'''
Description: Function to go through a list one by one until you find the target
Time Complexity: O(n)
Author: Blessing Ugochukwu
Date: 20/09/2025
'''

arr = [1, 2, 4, 5, 6, 8, 9]

target = 4 # target we are looking for

def linearSearch(arr, target):
    for i in range (len(arr)):
        if arr[i] == target:
            return f"linear search: target found in index {i}"
    return "target not found"

print(linearSearch(arr, target))