/*
    Given an array arr[], find the first repeating element. The element should occur more than once and the index of its first occurrence should be the smallest.

Note:- The position you return should be according to 1-based indexing. 

ex.Input: arr[] = [1, 5, 3, 4, 3, 5, 6]
Output: 2
Explanation: 5 appears twice and its first appearance is at index 2 which is less than 3 whose first the occurring index is 3.
Input: arr[] = [1, 2, 3, 4]
Output: -1
Explanation: All elements appear only once so answer is -1.

Expected Time Complexity: O(n)
Expected Auxilliary Space: O(n)

ques link: https://www.geeksforgeeks.org/problems/first-repeating-element4018/1

*/

#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
int method1(vector<int> &arr,int n){
    for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j]) return i+1;
            }
        }
    return -1;
}

int method2(vector<int>arr){
    unordered_map<int , int>hash;
        for(int i=0;i<arr.size();i++){
            hash[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++){
            if(hash[arr[i]]>1) return i+1;
        }
        return -1;
        
        // time complexity:O(n)
        // space complecity: O(n)
}
int main(){
    vector<int> arr={1,5,3,4,5,6};
    int n=arr.size();
    // cout<<method1(arr,n);
    cout<<method2(arr);
    return 0;
}


