class Solution {
public:
    vector<int> twoPtrMethod(vector<int>&arr,int k,int x){
        int l=0,h=arr.size()-1;
        while(h-l>=k){
            if(x-arr[l]>arr[h]-x){
                l++;
            }
            else{
                h--;
            }
        }
        vector<int>ans;
        for(int i=l;i<=h;i++){
            ans.push_back(arr[i]);
        }
        return ans;
        // time complexity:O(n-k)

    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // ex.1,2,3,4,5 4   -1 ans:[1,2,3,4]
        // ex: [12,16,22,30,35,39,42,45,48,50,53,55,56] 4   35  ans;[30,35,39,42]
        // ex.[1,2,3,4,5]  4   3

        return twoPtrMethod(arr,k,x);
        // again watched video pending for optimization
    }
};