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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr=head;
        ListNode* next=NULL;
        ListNode* newnode=0;
        while(curr!=nullptr && curr->next !=nullptr){
            next=curr->next;
            newnode=new ListNode(gcd(curr->val, curr->next->val));
            newnode->next=next;
            curr->next=newnode;
            curr=next;
        }
        return head;
    }
};