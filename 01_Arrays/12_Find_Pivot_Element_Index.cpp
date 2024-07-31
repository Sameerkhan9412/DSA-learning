class Solution {
// leetcode Link: https://leetcode.com/problems/find-pivot-index/

/*
    🚀Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.
*/
public:
    int bruteforce(vector<int> &nums){
        for(int i=0;i<nums.size();i++){
            int leftSum=0;
            int rightSum=0;
            for(int j=0;j<i;j++){
                leftSum+=nums[j];
            }
            for(int j=i+1;j<nums.size();j++){
                rightSum+=nums[j];
            }
            if(leftSum==rightSum) return i;
        }
        return -1;
    }

    int prefixSumApproach(vector<int>&nums){
        vector<int>lsum(nums.size(),0);
        vector<int>rsum(nums.size(),0);

        for(int i=1;i<nums.size();i++){
            lsum[i]=lsum[i-1]+nums[i-1];
        }
        for(int i=nums.size()-2;i>=0;i--){
            rsum[i]=rsum[i+1]+nums[i+1];
        }

        for(int i=0;i<nums.size();i++){
            if(lsum[i]==rsum[i]) return i;
        }
        return -1;
    }

    int pivotIndex(vector<int>& nums) {
        // method 1:
        // return bruteforce(nums);

        // method 2:
        return prefixSumApproach(nums);
    }
};