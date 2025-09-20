'''
Description: Function to get the target number using the sum three numbers in a given array
Time Complexity: O(max(n, m, o))
Author: Blessing Ugochukwu
Date: 20/09/2025
'''

arr = [3, 5, 2, 6, 3, 6, 7, 8, 4]

target = 19

def twoSum(arr):
    for i in range(len(arr) - 1):
        for j in range(i + 1, len(arr) - 1):
            for k in range(j + 1, len(arr) - 1):
                if arr[i] + arr[j] + arr[k] == target:
                    return [i, j, k]
    return "Target not Found"
            
print(twoSum(arr))