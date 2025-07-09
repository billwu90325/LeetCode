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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    
            ListNode head; // object: access w/ '.'
            ListNode* tail = &head; // pointer: access w/ '->'
    
            if (list1 == NULL && list2 == NULL) return NULL;
            else if (list1 == NULL) return list2;
            else if (list2 == NULL) return list1;
    
            while(list1 != NULL && list2 != NULL) {
                if (list1->val <= list2->val) {
                    tail->next = list1;
                    list1 = list1->next;
                } else {
                    tail->next = list2;
                    list2 = list2->next;
                } 
                tail = tail->next;
            }
    
            if (list1 != NULL) tail->next = list1;
            if (list2 != NULL) tail->next = list2;
    
            return head.next;
        }
    };