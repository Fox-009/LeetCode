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
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        while (head) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast-> next != nullptr && fast ->next-> next != nullptr){
            slow = slow->next ;
            fast = fast->next->next;
        }
        ListNode* newhead = reverse(slow->next);
        ListNode* tr = newhead;
        ListNode* rr = head;
        while(tr != nullptr){
            if (rr->val != tr->val){
                reverse(newhead);
                return false;
            }
            tr=tr->next;
            rr = rr->next;
        }
        slow->next = reverse(newhead);
        return true;
    }
};