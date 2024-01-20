#include <iostream>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool checkTree(TreeNode* root) {
        if(root->val == (root->left->val + root->right->val)) return true;
        else return false;
    }
};

int main() {
    TreeNode left_child = TreeNode(4);
    TreeNode right_child = TreeNode(6);
    TreeNode root = TreeNode(10, &left_child, &right_child);
    Solution solution;
    std::cout << solution.checkTree(&root);

    return 0;
}