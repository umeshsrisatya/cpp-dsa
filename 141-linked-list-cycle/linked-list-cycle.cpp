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

        if(head ==nullptr || head->next == nullptr || head->next->next == nullptr) return false;

        ListNode* slow= head->next;
        ListNode* fast = head->next->next;
        
        while(slow || fast ){
            if(slow == fast){
                return true;
            }
            if(slow->next == nullptr) return false;
            slow = slow->next;
            if(fast == nullptr || fast->next == nullptr || fast->next->next == nullptr) return false;
            fast = fast->next->next;
        }
        return false;
    }
};