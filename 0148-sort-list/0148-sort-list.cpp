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
    ListNode* mergeBoth(ListNode * l1,ListNode* l2){
        ListNode* root=new ListNode(0);
        ListNode* curr=root;
        while(l1 && l2){
            if(l1->val<=l2->val){
                curr->next=l1;
                l1=l1->next;
            }else{
                curr->next=l2;
                l2=l2->next;
            }
            curr=curr->next;
        }
        if(l1){
            curr->next=l1;
        }
        if(l2){
            curr->next=l2;
        }
        return root->next;
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode *tail=NULL,*slow=head,*fast=head;
        while(fast && fast->next){
            tail=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        tail->next=NULL;
        ListNode* l1=sortList(head);
        ListNode*l2=sortList(slow);
        return mergeBoth(l1,l2);
        
    }

};