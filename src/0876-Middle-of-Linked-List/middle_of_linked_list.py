from typing import Optional

# Definition for singly-linked list.
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        middle: ListNode = head
        end: ListNode = head

        while end != None and end.next != None:
            middle = middle.next
            end = end.next.next

        return middle
 
if __name__ == "__main__":
    # Create ListNode instances
    first_node = ListNode(1)
    second_node = ListNode(2)
    third_node = ListNode(3)
    fourth_node = ListNode(4)
    fifth_node = ListNode(5)

    # Connect the nodes
    first_node.next = second_node  
    second_node.next = third_node
    third_node.next = fourth_node
    fourth_node.next = fifth_node

    solution = Solution()

    middle_node = solution.middleNode(first_node)
    print(middle_node.val)