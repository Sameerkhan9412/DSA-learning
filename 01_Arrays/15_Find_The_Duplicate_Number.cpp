class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // 1st method:
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]) return nums[i];
           
        // }
        //  return -1;

        //  //time complexity:nlogn

        // 2nd method:
        // visited solution:
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int index=abs(nums[i]);
            // already visited
            if(nums[index]<0){
                return index;
            }
            // visited mark
           nums[index]*=-1;
        }
        return ans;
        // time complexity : O(n)
        // space complexity:O(1)
        // but ques says without modify the array.


        // 3rd method: without modify the array
        // positoning method:
        int i=1;
        while(nums[0]!=nums[i]){
            swap(nums[0],nums[i]);
        }
        return nums[0];

    }
};