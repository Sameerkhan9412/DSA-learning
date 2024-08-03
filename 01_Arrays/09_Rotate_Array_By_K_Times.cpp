#include<iostream>
#include<vector>
using namespace std;
void RotateArray(vector<int> arr,int k){
    int n=arr.size();
    vector<int> newArr(n,3);
    for(int index=0;index<arr.size();index++){  //⭐jab bhi ques me circular jana ho first try to do with modulas
        int newIndex=(index+k)%n;
        newArr[newIndex]=arr[index];
    }
    // printing
    for (int i = 0; i < newArr.size(); i++)
    {
        cout<<newArr[i];
    }
    
}
method 2:
// method 2:
    void reverse(vector<int> &nums,int s,int e){
        while(s<=e){
            swap(nums[s],nums[e]);
            s++;
            e--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1){
            return;
        }
        else{
            if(k>n){
                k=k%n;//bhool jata tu ise
            }
            reverse(nums,0,n-1);
            reverse(nums,0,k-1);
            reverse(nums,k,n-1);
        }
        
    }
int main(){
    vector<int> arr={2,3,4,5,6,7};
    int k=3;
    RotateArray(arr,k);
    return 0;
}