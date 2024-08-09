/*
    what if i select the minimum element and put it on its write positon
    ex. 44  33  55  22  11
        11  33  55  22  44
        11  22  55  33  44
        11  22  33  55  44
        11  22  33  44  55

    -> for ith iteration , pick smallest element from i to (n-1) index and swap it with ith element.

            iteration                           comparison
            i=0                                 4       n-1
            i=1                                 3       n-2
            i=2                                 2       n-3
            i=3                                 1       n-4
            total=1+2+3+4....(n-1)

            Time Complexity:    O(N^2)
            Space Complexity:   O(1)
*/

#include<iostream>
#include<vector>
using namespace std;
void SelectionSort(vector<int> &arr){   // do must practice ,logic pta hai but code wrong hojta hai in some places, keep practice on it.
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
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
    SelectionSort(arr);
    print(arr);
    return 0;
}