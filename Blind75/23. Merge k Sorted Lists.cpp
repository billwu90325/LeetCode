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
        ListNode* mergeKLists(vector<ListNode*>& lists) {
    
            ListNode head;
            ListNode* curr = &head;
    
            while (true) {
                int index = -1;
                int min = 10001;
                for (int i = 0; i < lists.size(); i++) {
                    if (lists[i]) {
                        if (lists[i]->val < min) {
                            min = lists[i]->val;
                            index = i;
                        }
                    }
                }
                
                if (index == -1) break;
                else {
                    curr->next = lists[index];
                    lists[index] = lists[index]->next;
                    curr = curr->next;
                } 
            }
    
            return head.next;
        }
    };