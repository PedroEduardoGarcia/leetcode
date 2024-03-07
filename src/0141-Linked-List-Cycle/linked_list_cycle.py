from typing import Optional, List

# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        visited: List[ListNode] = []

        if head is None:
            return False
            
        while True:
            if head not in visited:
                visited.append(head)
                if head.next is not None:
                    head = head.next
                else:
                    break
            else:
                return True
        
        return False


if __name__ == "__main__":
    head: ListNode = ListNode(3)
    node_2: ListNode = ListNode(2)
    node_3: ListNode = ListNode(0)
    node_4: ListNode = ListNode(-4)

    head.next = node_2
    node_2.next = node_3
    node_3.next = node_4
    node_4.next = node_2

    solution = Solution()
    
    print(solution.hasCycle(head))