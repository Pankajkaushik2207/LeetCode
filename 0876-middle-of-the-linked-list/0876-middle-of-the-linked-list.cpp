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
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//           if(head == NULL || head->next == NULL){
//             return head;
//         }
        
//           ListNode* fast = head;
//           ListNode* fastest = head->next;
//           ListNode* slow = head;
     
//         while(head != NULL && slow != NULL){
//             fast = fastest -> next;
        
//             if(slow!=NULL){
//                 slow = slow->next;
              
//             }
//         }
        
        
//         return slow;
//     }
//    ListNode* printFunction(ListNode* head){
//        int arr[] = {};
//        while(head != NULL){
//            arr.pushback(slow);
//        }
//        return arr;
//    } 
// };



class Solution {
public:
    int length(ListNode* head){
        int len = 0;
        while(head != NULL)
        {
            len++;
            head = head->next;
        }
        return len;
    }
    ListNode* middleNode(ListNode* head) {
        int len = length(head);
        int ans = len/2;

        ListNode* temp = head;
        int cnt = 0;
        while(cnt < ans)
        {
            temp = temp->next;
            cnt++;
        }
        return temp;
    }
};