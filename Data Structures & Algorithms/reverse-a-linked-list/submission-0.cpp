/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }

        ListNode* prev_node = new ListNode(0, head);
        ListNode* curr_node = new ListNode(0, prev_node->next);
        ListNode* next_node = new ListNode(0, curr_node->next);

        while (curr_node->next != nullptr) {
            curr_node->next = prev_node;
            
            prev_node = curr_node;
            curr_node = next_node;
            next_node = next_node->next;
        }
        curr_node->next = prev_node;
        head->next = nullptr;

        return curr_node;
    }
};
