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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy=new ListNode(val);
        dummy->next=head;
        ListNode* Prev=dummy;
        ListNode* curr=head;
        while(curr!=nullptr){
            if(curr->val==val){
                Prev->next=curr->next;
            }
            else{
                Prev=Prev->next;
            }
            curr=curr->next;
        }
        return dummy->next;
    }
};