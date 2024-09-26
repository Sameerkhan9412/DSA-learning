class Solution {
    /*
        leetcode: https://leetcode.com/problems/sort-colors/

    */

public:
    /*method 1:
    using counting
    int zeros,ones,twos;
    zeros=ones=twos=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0) zeros++;
        else if(nums[i]==1) ones++;
        else twos++;
    }

    int i=0;
    while(zeros--){
        nums[i]=0;
        i++;
    }
    while(ones--){
        nums[i]=1;
        i++;
    }
    while(twos--){
        nums[i]=2;
        i++;
    }
    */


    /*Method 2: Inplace -> ye achcha h-> using 3 ponter approach
    void sortColors(vector<int>& nums) {
       int start=0,mid=0,end=nums.size()-1;
        while(mid<=end){
            if(nums[mid]==0){
                swap(nums[start],nums[mid]);
                start++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[end]);
                end--;
            }
        }
    }*/
};
