'''
Description: Function to repearedly cut a sorted list in half to find the target
Time Complexity: O(log n)
Author: Blessing Ugochukwu
Date: 20/09/2025
'''

arr = [1, 2, 4, 5, 6, 8, 9]

target = 4 # target we are looking for

def binarySearch(arr, target):
    left = 0
    right = len(arr) - 1

    while left <= right:
        mid = (left + right) // 2
        
        if arr[mid] == target:
            return f"binary search: target found in index {mid}"
        elif arr[mid] > target:
            right = mid - 1
        else:
            left = mid + 1
            
    return "target not found"

print(binarySearch(arr, target))