// ques link:https://leetcode.com/problems/linked-list-cycle/
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
    // interviewer happy nhi hoga
    bool hasCycle(ListNode *head) {
        map<ListNode* ,bool> table;
        ListNode* temp=head;
        while(temp!=NULL){
            if(table[temp]==false){
                table[temp]=true;
            }
            else{
                // cycle present
                return true;
            }
            temp=temp->next;
        }
        // loop not present
        return false;
    }
};

// best approach//
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* tempHead=head;
        ListNode* fast=tempHead;
        ListNode* slow=tempHead;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                if(slow==fast){
                    return true;
                }
                fast=fast->next;
                slow=slow->next;
            }
        }
        return false;
    }
};
time complexity:O(N)
