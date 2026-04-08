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
    bool hasCycle(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return false;
        }
        ListNode *fast=head;
        ListNode *slow=head;
        fast=fast->next->next;
        slow=slow->next;
        if(slow==nullptr || fast==nullptr){
                return false;
        }
        while(true){
            if(fast==slow){
                return true;
            }
            if(slow==nullptr || fast==nullptr){
                return false;
            }
            if(fast->next && fast->next->next){
                fast=fast->next->next;
            }
            else{
                return false;
            }
            if(slow->next){
                slow=slow->next;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
