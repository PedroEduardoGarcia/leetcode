#include <iostream>
#include <vector>


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        std::vector<int> values;
        ListNode* current = head;
        int left, right = 0;

        if (!head)
            return true;
        
        while (current) {
            values.push_back(current->val);
            current = current->next;
        }
        
        right = values.size() - 1;
        while (left <= right) {
            if (values[left] != values[right])
                return false;
            left += 1;
            right -= 1;
        }
        
        return true;
    }
};

int main() {
    ListNode* head = new ListNode(1);
    ListNode* node1 = new ListNode(2);
    ListNode* node2 = new ListNode(2);
    ListNode* node3 = new ListNode(1);

    head->next = node1;
    node1->next = node2;
    node2->next = node3;

    Solution solution;

    std::cout << solution.isPalindrome(head);

    return 0;
}             