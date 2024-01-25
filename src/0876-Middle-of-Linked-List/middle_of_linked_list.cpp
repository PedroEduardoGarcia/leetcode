#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* middle = head;
        ListNode* end = head;

        while (end != nullptr && end->next != nullptr) {
            middle = middle->next;
            end = end->next->next;
        }
        return middle;
    }
};

int main() {
    // Create ListNode instances
    ListNode* first_node = new ListNode(1);
    ListNode* second_node = new ListNode(2);
    ListNode* third_node = new ListNode(3);
    ListNode* fourth_node = new ListNode(4);
    ListNode* fifth_node = new ListNode(5);

    // Connect the nodes
    first_node->next = second_node;
    second_node->next = third_node;
    third_node->next = fourth_node;
    fourth_node->next = fifth_node;

    Solution solution;
    ListNode* result = solution.middleNode(first_node);
    std::cout << "Middle node value: " << result->val;

    // Free allocated memory
    delete first_node;
    delete second_node;
    delete third_node;
    delete fourth_node;
    delete fifth_node;

    return 0;
}