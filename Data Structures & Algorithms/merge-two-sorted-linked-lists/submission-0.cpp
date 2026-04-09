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
        ListNode* curr1=list1;
        ListNode* curr2=list2;
        ListNode* dummy=new ListNode(-1);
        ListNode* tmp=dummy;
        while(curr1!=nullptr && curr2!=nullptr){
            if(curr1->val>curr2->val){
                tmp->next=curr2;
                tmp=curr2;
                curr2=curr2->next;
            }
            else{
                tmp->next=curr1;
                tmp=curr1;
                curr1=curr1->next;
            }
        }
        if(curr1){
            tmp->next=curr1;
        }
        if(curr2){
            tmp->next=curr2;
        }
        return dummy->next;
    }
};
