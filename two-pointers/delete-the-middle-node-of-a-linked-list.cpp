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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr){
            return nullptr;
        }
        int count = 1;
        ListNode* temp = head;

        while(temp->next != nullptr){
            count++;
            temp = temp->next;
        }
        int n = count/2;
        ListNode* ptr = head;

        for(int i = 1; i<n; i++){
            ptr = ptr->next;
        }
        ListNode* del = ptr->next;
        ptr->next = ptr->next->next;

        delete del;
        return head;
    }
};