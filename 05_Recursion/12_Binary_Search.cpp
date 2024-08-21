#include<iostream>
using namespace std;
int binarySearch(int arr[],int start,int end,int target){
    if(start>end) return -1;
    int mid=start+(end-start)/2;
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]>target){
        return binarySearch(arr,start,mid-1,target);
    }
    else{
        return binarySearch(arr,mid+1,end,target);
    }

}
int main(){
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(int);
    int start=0;
    int end=size-1;
    // int target=40;
    int target=70;
    cout<<binarySearch(arr,start,end,target);
    return 0;
}