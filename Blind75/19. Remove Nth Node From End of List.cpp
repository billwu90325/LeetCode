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
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            
            ListNode* fast = head;
            ListNode* slow = head;
    
            for (int i = 0; i < n; i++) fast = fast->next;
    
            if (fast == nullptr) return head->next;
    
            while (fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
    
            if (slow->next) slow->next = slow->next->next;
            return head;
    
    
            // SOL1: record list
            /*
            vector<ListNode*> list;
            ListNode* curr = head;
    
            while (curr) {
                list.push_back(curr);
                curr = curr->next;
            }
    
            int len = list.size();
    
            if (len - n - 1 < 0) head = head->next;
            else if (len - n + 1 > len - 1) list[len - n - 1]->next = nullptr;
            else list[len - n - 1]->next = list[len - n + 1];
    
            return head;
            */
        }
    };