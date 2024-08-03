// ques link:https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
class Solution {
public:
    // method 1:
    // vector<int> rearrangeArray(vector<int>& nums) {
    //     vector<int>pos,neg;
    //     for(int i=0;i<nums.size();i++){
    //         if(nums[i]<0){
    //             neg.push_back(nums[i]);
    //         }
    //         else{
    //             pos.push_back(nums[i]);
    //         }
    //     }
    //     vector<int>ans;
    //     int j=0;
    //     for(int i=0;i<nums.size();i=i+2){
    //             ans.push_back(pos[j]);
    //             ans.push_back(neg[j]);
    //         j++;
    //     }
    //     return ans;
    // }

    // method 2:two pinter
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),-1);
        int odd=1,even=0;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(nums[i]>0){
                ans[even]=num;
                even+=2;
            }
            else{
                ans[odd]=num;
                odd+=2;
            }
        }
        return ans;
    }
};