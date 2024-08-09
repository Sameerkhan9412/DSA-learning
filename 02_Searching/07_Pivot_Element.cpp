#include<iostream>
#include<vector>
using namespace std;

int findPivotIndex(vector<int>& nums){
    int n=nums.size();
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(s==e) return s;
        if(nums[mid]<nums[mid-1]) return mid-1;
        if(nums[mid]>nums[mid+1]) return mid;
        if(nums[s]>nums[mid]) {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main(){
    vector<int>nums={12,14,15,2,4,6,8,10};
    int pivotIndex=findPivotIndex(nums);
    cout<<pivotIndex;
}