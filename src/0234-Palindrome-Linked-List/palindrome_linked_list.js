
// Definition for singly-linked list.
function ListNode(val, next) {
  this.val = (val===undefined ? 0 : val)
  this.next = (next===undefined ? null : next)
}

/*
 * @param {ListNode} head
 * @return {boolean}
 */
var isPalindrome = function(head) {
  let values = []
  let current = head
  let left = 0
  let right = 0

  if (!head) {
    return true
    
  }
  
  while (current) {
    values.push(current.val)
    current = current.next
  }

  right = values.length - 1

  while (left < right) {
    if (values[left] !== values[right])
        return false
    left += 1
    right -= 1
  }

  return true
};

let head = new ListNode(1)
let node1 = new ListNode(2)
let node2 = new ListNode(2)
let node3 = new ListNode(1)

head.next = node1
node1.next = node2
node2.next = node3

console.log(isPalindrome(head))