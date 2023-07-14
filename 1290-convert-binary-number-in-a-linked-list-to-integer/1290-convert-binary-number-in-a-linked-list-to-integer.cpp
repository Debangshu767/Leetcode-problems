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
    int getDecimalValue(ListNode* head) {
        
        int n = 0;
        int sum = 0;
        
        ListNode *nextNode,*prev=NULL;
            
        while(head)
        {
            nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        head = prev;
        while(head)
        {
            sum += pow(2,n)*head->val;
            n++;
            head=head->next;
        }
        
        return sum;
        
        
    }
};