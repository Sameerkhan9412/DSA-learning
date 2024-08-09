/*
    ex. 44  33  55  22  11
        33  44  55  22  11
        22  33  44  55  11
        11  22  33  44  55  -> sorting complete
*/
#include<iostream>
#include<vector>
using namespace std;
void InsertionSort(vector<int> &arr){   // do must practice ,logic pta hai but code wrong hojta hai in some places, keep practice on it.
   int n=arr.size();
//    int i=0; chhod deta hu.
    for(int i=0;i<n;i++){
        int key=arr[i];
        int j=i-1;

        // move element of array from 0 to i-1 which are greater than key to one positon ahead of there current position.
        while (j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        

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
    // vector<int> arr={5,3,0,-1,33,56,4};
    vector<int> arr={44,33,55,22,11};
    print(arr);
    InsertionSort(arr); //Time complexity:O(N^2)
    print(arr);
    return 0;
}