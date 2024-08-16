class Solution {
public:
    int binarySearch(vector<int> &nums,int start,int x){
        int end=nums.size();
        int mid=start+(end-start)/2;
        while(start<=end){
            if(nums[mid]==x){
                return mid;
            }
            else if(x>nums[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return -1;
    }
    int findPairs(vector<int>& nums, int k) {
        // brute force method-> consider each and every pair is diff.
        // int count;
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<num.size();j++){
        //         if(abs(nums[i])-abs(nums[j]==k)) count++;
        //     }
        // }
        // return count++;
        // // time complexity:O(N^2)

        //----------------------- method 2:two pointer approach------------------
        // sort(nums.begin(),nums.end());

        // int i=0,j=1;
        // // int ans=0;
        // set<pair<int,int>> ans; //set distinct value hhold krta h,and pair is data structor which hold data in pair
        // while(j<nums.size()){
        //     int diff=nums[j]-nums[i];
        //     if(diff==k){
        //         // cout<<nums[i]<<" "<<nums[j]<<endl;
        //         ans.insert({nums[i],nums[j]}); // curly braces bhul jate h
        //         // ans++;
        //         i++;j++;
        //     }
        //     else if(diff>k){
        //         i++;
        //     }
        //     else{
        //         j++;
        //     }
        //     if(i==j) j++;
        // }
        // return ans.size();

        // ----------------------method 3 using binary search----------------------------
        sort(nums.begin(),nums.end());
        set<pair<int,int>> ans;
        for (int i=0;i<nums.size();i++){
            if(binarySearch(nums,i+1,nums[i]+k)!=-1){
                ans.insert({nums[i],nums[i]+k});
            }
        }
        return ans.size();

    }
};