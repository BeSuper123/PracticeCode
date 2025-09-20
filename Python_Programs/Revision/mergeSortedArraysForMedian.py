'''
Description: Function to get the median from two separate sorted arrays
Time Complexity O(log (m+n))
Author: Blessing Ugochukwu
Date: 20/09/2025
'''
arr1 = [1, 4, 5]

arr2 = [3, 6]


def findMedianSortedArrays(nums1, nums2):
    nums3 = sorted(nums1 + nums2)
    mid = len(nums3) // 2

    if len(nums3) % 2 == 1:
        return(float(nums3[mid]))
    else:
        return (nums3[mid - 1] + nums3[mid]) / 2.0

    return total

print(f"Median: {findMedianSortedArrays(arr1, arr2)}")