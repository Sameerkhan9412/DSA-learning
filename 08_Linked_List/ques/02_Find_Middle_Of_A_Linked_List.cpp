// ques link:https://leetcode.com/problems/middle-of-the-linked-list/submissions/1380999980/

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
    int getLength(ListNode* head){
        int length=0;
        ListNode* temp=head;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        return length;
    }
    ListNode* middleNode(ListNode* head) {
        // method 1:       time comple:O(n)    , for length->O(N) and for find mid=O(n/2), yahan pr linked list ko 2 pass lagrhe hai.
        int n=getLength(head);
        int position=n/2+1;
        int currPos=1;
        ListNode* temp=head;
        while(position!=1){
            temp=temp->next;
            position--;
        }
        return temp;

        // method 2: slow and fast pointer -> tortoise algorithm:
        // slow wla ponter 1 step aage brege and fast wala ponter 2 step aage brege
        // slow wla pointer 1 step jabhi aage brega jab fast wala ponter 2 step aage bd sakta ho.
        //bht achai approach hai
        ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL){
            fast=fast->next;
            if(fast->next!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
        }
        return slow;
    }
    }
};