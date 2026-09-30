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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head1 = l1;
        ListNode* head2 = l2;
        ListNode* result = nullptr;
        vector<int> a;
        vector<int> b;
        while(head1 != nullptr ){
            a.push_back(head1->val);
            head1 = head1->next;
        }
        while(head2 != nullptr ){
            b.push_back(head2->val);
            head2 = head2->next;
        }
        int carry = 0;
        int sum;
        while(!a.empty() || !b.empty() || carry){
            int a1 = 0;
            int b1 = 0;
            if (!a.empty()){
                a1 = a.back();
                a.pop_back();
            }
            if (!b.empty()){
                b1 = b.back();
                b.pop_back();
            }
            sum = a1 + b1 + carry;
            int digit = sum % 10;
            carry = sum/10;

            ListNode* newNode = new ListNode(digit);
            newNode->next = result;
            result = newNode;
        }
        return result;
    }
};