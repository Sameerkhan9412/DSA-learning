/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//ques link:https://leetcode.com/problems/linked-list-cycle-ii/
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        // check for loop
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL) {
            fast = fast->next;
            if (fast!= NULL) {
                fast = fast->next;
                slow = slow->next;
            }
            if (slow == fast) {
                break;
            }
        }
        if(fast==NULL){
            // no cycle presetn
            return NULL;
        }
        // yha pahuche means slow and fast meeet kr chuke hai
        slow = head;
        // slow and fast ko ek ek step move krenge
        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }
        // return starting point
        return slow;
    }
};