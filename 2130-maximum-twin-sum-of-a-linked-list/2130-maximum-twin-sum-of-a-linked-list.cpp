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
    int pairSum(ListNode* head) {
        
        ListNode * slow = head;
        ListNode* fast = head;
        int maxsum = 0;
        
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* NextNode, *prev = NULL;
        
        while(slow)
        {
            NextNode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = NextNode;
        }
        
        while(prev)
        {
            maxsum = max(head->val+prev->val,maxsum);
            head=head->next;
            prev = prev->next;
        }
        return maxsum;
    }
};