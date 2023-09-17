/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* Slow = head;
        ListNode* Fast = head;
        
        while (Fast != NULL && Fast->next != NULL) {
            Slow = Slow->next;        // Move Slow by one step
            Fast = Fast->next->next;  // Move Fast by two steps
            
            if (Slow == Fast) {
                return true;  // If they meet, there's a cycle
            }
        }
        
        return false;  // No cycle found
    }
};
