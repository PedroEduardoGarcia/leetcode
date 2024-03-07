 //Definition for singly-linked list.
 function ListNode(val) {
  this.val = (val===undefined ? 0 : val)
  this.next = (next===undefined ? null : next)
}

/**
 * @param {ListNode} head
 * @return {boolean}
 */
var hasCycle = function(head) {
  let visited = []

  if (head === null) return false

  while (true) {
    if (visited.includes(head) === false) {
      visited.push(head)
      if (head.next !== null) {
        head = head.next
      }
      else {
        break
      }
    }
    else {
      return true
    }
  }

  return false
};

var head = new ListNode(3)
var node_2 = new ListNode(2)
var node_3 = new ListNode(0)
var node_4 = new ListNode(-4)

head.next = node_2
node_2.next = node_3
node_3.next = node_4
node_4.next = node_2

console.log(hasCycle(head))