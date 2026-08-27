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
        
        if (list1 == nullptr) return list2;
        if (list2 == nullptr) return list1;
        
        ListNode* ret = nullptr;
        
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        
        if(list1->val <= list2->val) {
            ret = new ListNode(curr1->val, nullptr);
            curr1 = curr1->next;
        }
        else {
            ret = new ListNode(curr2->val, nullptr);
            curr2 = curr2->next;
        }
        
        ListNode* curr_ret = ret;

        while(curr1 != nullptr && curr2 != nullptr) {
            if(curr1->val <= curr2->val) {
                curr_ret->next = new ListNode(curr1->val, nullptr);
                curr1 = curr1->next;
            }
            else {
                curr_ret->next = new ListNode(curr2->val, nullptr);
                curr2 = curr2->next;
            }
            curr_ret = curr_ret->next;
        }

        curr_ret->next = (curr1 == nullptr) ? curr2 : curr1;

        return ret;
    }
};