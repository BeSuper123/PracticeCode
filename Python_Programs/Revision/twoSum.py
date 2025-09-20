'''
Description: Function to get the target number using the sum two numbers in a given array
Time Complexity: O(max(n, m))
Author: Blessing Ugochukwu
Date: 20/09/2025
'''

arr = [3, 5, 2, 6, 3, 6, 7, 8, 4]

target = 6

def twoSum(arr):
    for i in range(len(arr) - 1):
        for j in range(i + 1, len(arr) - 1):
            if arr[i] + arr[j] == target:
                return [i, j]
    return "Target not Found"
            
print(twoSum(arr))