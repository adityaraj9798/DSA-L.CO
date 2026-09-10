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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        ListNode* curr=head;
        while(curr!=nullptr && curr->next!=nullptr){
            ListNode* first=curr;
            ListNode* second=curr->next;
            ListNode* nextpair=second->next;
            prev->next=second;
            second->next=first;
            first->next=nextpair;
            prev=first;
            curr=nextpair;
        }
        return dummy->next;
    }
};