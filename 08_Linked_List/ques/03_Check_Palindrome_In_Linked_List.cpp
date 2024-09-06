ques linnk:https://leetcode.com/problems/palindrome-linked-list/description/
//first approach: linked list ko reverse krke compare kro
// second approach: 
    // step 1:break into two half
    // step 2:second list ->reverse
    // step 3:compare both list

    // outcome: no extra space

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
    bool compareList(ListNode* head1,ListNode* head2){
        while(head2!=NULL){
            if(head1->val!=head2->val) {
                return false;
            }
            else{
                head1=head1->next;
                head2=head2->next;
            }
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        // step1: breack into 2 halves
        ListNode* midNode=middleNode(head);
        ListNode* head2=midNode->next;
        midNode->next=NULL;

        // step2: reverse second half
        ListNode* prev=NULL;
        ListNode* curr=head2;
        head2=reverseUsingRecursion(curr,prev);

        // step3: compare both linked list
        bool ans=compareList(head,head2);
        return ans;
    }
};

// time complexity : O(n)


