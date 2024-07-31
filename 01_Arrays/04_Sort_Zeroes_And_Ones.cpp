#include<iostream>
using namespace std;
void SortZeroAndOnes(int arr[],int size){
    int start=0,end=size-1;
    while(start<=end){
        if(arr[start]==0){
            start++;
        }
        else if(arr[end]==1){
            end--;
        }
        else{
            swap(arr[start],arr[end]);
        }

    }

    // printing aarrray
    int i=0;
    while(i<size){
        cout<<arr[i]<<" ";
        i++;
    }
}
int main(){
    int arr[]={0,1,1,0,1,0,1,1,0,1,0,0,0,1};
    int size=14;
    SortZeroAndOnes(arr,size);
    return 0;
}