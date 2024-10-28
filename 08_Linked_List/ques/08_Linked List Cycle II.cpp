// Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

// ques link:https://leetcode.com/problems/linked-list-cycle-ii/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp=head;
        ListNode* slow=temp;
        ListNode* fast=temp;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
                if(fast==slow){
                    slow=temp;
                    while(fast!=slow){
                        fast=fast->next;
                        slow=slow->next;
                    }
                    return slow;
                }
            }
        }
        if(fast==NULL){
            return NULL;
        }
        slow=temp;
        while(slow==fast){
            slow=slow->next;
            fast=fast->next;
        }

        return slow;
    }
};