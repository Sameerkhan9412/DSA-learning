// ques link:https://leetcode.com/problems/reverse-linked-list/submissions/1380969894/

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
    ListNode* reverseUsingRecursion(ListNode* curr,ListNode* prev){
        if(curr==NULL){
            return prev;
        }
        ListNode* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
        ListNode* recursionKaAns=reverseUsingRecursion(curr,prev);
        return recursionKaAns;
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        // method 1: using itration
        // while(curr!=NULL){
        //     ListNode* temp=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=temp;
        // }
        // return prev;

        // method 2:using recursion:
        return reverseUsingRecursion(curr,prev);
    }
};