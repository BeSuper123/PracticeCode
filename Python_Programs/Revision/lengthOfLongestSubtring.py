'''
Description: Function to find the longest substring in a given string (non-duplicates)
Time Complexity: O(n^3)
Author: Blessing Ugochukwu
Date: 20/09/2025
'''

def lengthOfLongestSubstring(s):
    seen = set()
    left = 0
    max_length = 0
    
    for right in range (len(s)):
        while s[right] in seen:
            seen.remove(s[left])
            left += 1
        seen.add(s[right])
        max_length = max(max_length, right - left + 1)
    return max_length

print(lengthOfLongestSubstring("ajjsdbhbhbde"))