// Definition for a binary tree node.
function TreeNode(val, left, right) {
  this.val = (val===undefined ? 0 : val)
  this.left = (left===undefined ? null : left)
  this.right = (right===undefined ? null : right)
 }

/**
 * @param {TreeNode} root
 * @return {boolean}
 */
var checkTree = function(root) {
  return root.val == root.left.val + root.right.val
}

left_child = new TreeNode(4)
right_child = new TreeNode(6)
root = new TreeNode(10, left_child, right_child)
console.log(checkTree(root))