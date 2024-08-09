/*
    swap the adjacents if needed, till we get all the array elements sorted.
    ex 5    4   3   2   1
    if(arr[i]>arr[i+1]) then swap it
    1st iteration:  4   5   3   2   1
                    4   3   5   2   1
                    4   3   2   5   1
                    4   3   2   1   5       first largest elemnt placed on its correct position and 4 comparison

    2nd Iteration:  
                    3   4   2   1   5
                    3   2   4   1   5
                    3   2   1   4   5       second largest elemetn placed on ites correct position and 3 comparison

    3rd iteration:
                    2   3   1   4   5
                    2   1   3   4   5       third largest element placed on its correct position and 2 comparison

    4th iteration:
                    1   2   3   4   5       forth largest element placed on ites corrct position and 1 comparison.

    conclusion: if an array have N elements then iteration will be from 1 to N-1
    generalize: 1           n-1 comparison
                2           n-2 comparison
                3           n-3 comparison
                .           .
                .           .
                .           .
                n-1          1 comparion
                total comparison:1+2+3+.......+(n-2)+(n-1)=n(n-1)/2
                time complexity:O(N^2)
                space complexity:O(1)

    Algorithm:
                iteration:                  comparison
                i=0                         4       n-i-1
                i=1                         3
                i=2                         2
                i=3                         1
*/


#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void print(vector<int> arr){
    int i=0;
    while(i<arr.size()){
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;
}
int main(){
    // vector<int> arr={5,4,3,2,1};
    vector<int> arr={5,3,0,-1,33,56,4};
    print(arr);
    bubbleSort(arr);
    print(arr);
    return 0;
}