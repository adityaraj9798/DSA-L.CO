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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* start=new  ListNode(0);
        start->next=head;
        unordered_map<int, ListNode*>mp;
        mp[0]=start;
        ListNode* temp=start;
        int sum=0;
        while(temp){
            sum+=temp->val;
            mp[sum]=temp;
            temp=temp->next;
        }
        temp=start;
        sum=0;
        while(temp){
            sum+=temp->val;
            temp->next=mp[sum]->next;
            temp=temp->next;
        }
        return mp[0]->next;
    }
};