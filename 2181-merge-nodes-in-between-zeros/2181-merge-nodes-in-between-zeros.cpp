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
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode *PrevNode = new ListNode();
        ListNode *temp = head->next;
        int sum = 0;
        int track = 0;
        while(temp != NULL)
        {
            sum += temp->val;
            if(temp->val == 0)
            {
                ListNode *NewNode = new ListNode;
                NewNode->val = sum;
                sum = 0;
                PrevNode->next = NewNode;
                NewNode->next = temp;
                PrevNode = NewNode;
                if(track == 0)
                {
                    head=NewNode;
                    track=1;
                }
            }
            temp= temp->next;
            
        }
        PrevNode->next = NULL;
        
        return head;
    }
};