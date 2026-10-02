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
        int count = 0;
        ListNode* temp = head;
        while(temp!= nullptr){
            count++;
            temp=temp->next;
        }
        if(count == n){
            ListNode* newhead = head->next;
            delete head;
            return newhead;
        }
        ListNode* Temp = head;
        int res = count - n;
        while(Temp != nullptr){
            res--;
            if(res == 0){
                break;
            }
            else{
                Temp = Temp->next;
            }
        }
        ListNode* del = Temp->next;
        Temp->next = Temp->next->next;
        delete del;
        return head;
    }
};