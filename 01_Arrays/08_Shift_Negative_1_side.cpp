#include<iostream>
using namespace std;
void SortNegativeAndPostive(int arr[],int size){
    int start=0,end=size-1;
    while(start<=end){
        if(arr[start]<0){
            start++;
        }
        else if(arr[end]>=0){
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
    int arr[]={3,4,-5,-4,3,-5,1,4,-3,-4,5,-6,3,-1};
    int size=14;
    SortNegativeAndPostive(arr,size);
    return 0;
}