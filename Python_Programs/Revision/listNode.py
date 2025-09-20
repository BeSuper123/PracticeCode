'''
Description: Function to add the two numbers in the linked list and put into a new linked list
Time Complexity: O(n)
Author: Blessing Ugochukwu
Date: 20/09/2025
'''

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val    # the number inside the car
        self.next = next  # the hook to the next car

class Solution:
    def addTwoNumbers(self, l1, l2):
        # STEP 1
        dummy = ListNode()
        current = dummy
        carry = 0
        
        # STEP 2
        while l1 or l2 or carry:
            # STEP 3
            v1 = l1.val if l1 else 0
            v2 = l2.val if l2 else 0

            # STEP 4
            total = v1 + v2 + carry
            carry = total // 10
            value = total % 10
            
            # STEP 5
            current.next = ListNode(value)
            current = current.next
            
            # STEP 6
            if l1:
                l1 = l1.next
            
            if l2:
                l2 = l2.next
                
        # STEP 7
        return dummy.next
    
# function to print the linked list
def print_linked_list(node):
    while node:
        print(node.val, end=" -> " if node.next else "")
        node = node.next
    print()
    
# first linked list: 2 -> 4 -> 3
a = ListNode(2)
b = ListNode(4)
c = ListNode(3)
a.next = b
b.next = c

# second linked list: 5 -> 6 -> 4
d = ListNode(5)
e = ListNode(6)
f = ListNode(4)
d.next = e
e.next = f

# creating an instance of my class
mySol = Solution()
result = mySol.addTwoNumbers(a, d)

# printing the results
print_linked_list(result)

        