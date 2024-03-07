#include <iostream>
#include <vector>
#include <algorithm>

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
    bool hasCycle(ListNode *head) {
        std::vector<ListNode*> visited = {};

        if (head == nullptr) return false;

        while (true) {
            if(std::find(visited.begin(), visited.end(), head) != visited.end()) {
                return true;
            }
            else {
                visited.push_back(head);
                if (head->next != nullptr){
                    head = head->next;
                }
                else {
                    break;
                }
            }
        }
        
        return false;
    }
};

int main() {
    ListNode* head = new ListNode(3);
    ListNode* node_2 = new ListNode(2);
    ListNode* node_3 = new ListNode(0);
    ListNode* node_4 = new ListNode(-4);

    head->next = node_2;
    node_2->next = node_3;
    node_3->next = node_4;
    node_4->next = node_2;

    Solution solution;

    std::cout << solution.hasCycle(head);
    
    return 0;
}