//Definition for singly-linked list.
function ListNode(val, next) {
  this.val = (val===undefined ? 0 : val)
  this.next = (next===undefined ? null : next)
}

/*
* @param {ListNode} head
* @return {ListNode}
*/
var middleNode = function(head) {
  var middle = head
  var end = head

  while (end != null && end.next != null) {
      middle = middle.next
      end = end.next.next
  }
  return middle
};

// Create ListNode instances
var first_node = new ListNode(1)
var second_node = new ListNode(2)
var third_node = new ListNode(3)
var fourth_node = new ListNode(4)
var fifth_node = new ListNode(5)

// Connect the nodes
first_node.next = second_node
second_node.next = third_node
third_node.next = fourth_node
fourth_node.next = fifth_node

console.log(middleNode(first_node))