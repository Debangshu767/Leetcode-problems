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
    void reorderList(ListNode* head) {
        
        ListNode* fast=head,*slow=head;
        
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode*next,*prev = NULL;
        
        while(slow)
        {
            next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
            
        }
        
        ListNode* Dummy = new ListNode();
        ListNode*temp = Dummy;
        
        while(prev && head->next)
        {
            temp->next = head;
            head = head->next;
            temp = temp->next;
            
            temp->next = prev;
            prev = prev->next;
            temp = temp->next;
        }
        head = Dummy->next;
        
    }
};