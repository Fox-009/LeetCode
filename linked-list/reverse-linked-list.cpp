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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }
        ListNode*temp = head;
        vector<int>arr;
        while(temp != nullptr){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int n = arr.size();
        ListNode* newhead = new ListNode(arr[n-1]);
        ListNode* Tail = newhead;
        for(int i = 1; i<n ; i++){
            ListNode* newNode = new ListNode(arr[n-1-i]);
            Tail->next = newNode;
            Tail = newNode;
        }
        return newhead;
    }
};