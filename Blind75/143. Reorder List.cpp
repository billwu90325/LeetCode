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
        void reorderList(ListNode* head) {
    
            // Find the middle point
            ListNode* fast = head;
            ListNode* slow = head;
    
            while (fast->next && fast->next->next) {
                slow = slow->next;
                fast = fast->next->next;
            }
    
            // Reverse the second half
            ListNode* prev = nullptr;
            ListNode* curr = slow->next;
            
            while (curr) {
                ListNode* tmp = curr->next;
                curr->next = prev;
                prev = curr;
                curr = tmp;
            }
    
            slow->next = nullptr;
    
            // Merge first & second half
    
            ListNode* first = head;
            ListNode* second = prev;
    
            while (second) {
                ListNode* tmp1 = first->next;
                ListNode* tmp2 = second->next;
    
                first->next = second;
                second->next = tmp1;
    
                first = tmp1;
                second = tmp2;
            } 
    
            // SOL1: record all node 
            // space complexity: O(n)
            /*
            vector<ListNode*> list;
    
            while (head != nullptr) {
                list.push_back(head);
                head = head->next;
            }
    
            int l = 0;
            int r = list.size() - 1;
            while (l < r) {
                list[l]->next = list[r];
                l++;
                if (l < r) {
                    list[r]->next = list[l];
                    r--;
                }
            }
    
            list[l]->next = nullptr;
            */
    
        }
    };