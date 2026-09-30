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
        ListNode* one = list1;
        ListNode* two = list2;

        ListNode* temp = new ListNode(-1);
        ListNode*newhead = temp;

        while(one != nullptr && two != nullptr){
            if(one->val >= two->val)
            {
                temp->next = two;
                two = two->next;
            }
            else
            {
                temp->next = one;
                one = one->next;
            }
            temp = temp->next;
        }
        while(one != nullptr){
            temp->next = one;
            temp = temp->next;
            one = one->next;
        }
        while(two != nullptr){
            temp->next = two;
            temp = temp->next;
            two = two->next;
        }

        return newhead->next;
    }
};