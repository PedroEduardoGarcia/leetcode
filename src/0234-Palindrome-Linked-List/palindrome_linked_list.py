from typing import Optional, List

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        values: List[int] = []
        current: ListNode = head
        left: int = 0
        right: int = 0

        if not head:
            return True
        
        while current:
            values.append(current.val)
            current = current.next
        
        right = len(values) - 1

        while left < right:
            if values[left] != values[right]:
                return False
            left += 1
            right -= 1
        
        return True
        
        

if __name__ == "__main__":
    head: ListNode = ListNode(1)
    node1: ListNode = ListNode(2)
    node2: ListNode = ListNode(2)
    node3: ListNode = ListNode(1)

    head.next = node1
    node1.next = node2
    node2.next = node3

    solution = Solution()

    print(solution.isPalindrome(head))