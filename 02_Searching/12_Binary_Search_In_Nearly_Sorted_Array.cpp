/*
    conditions:
    1)all element occures even number of times exccept one.
    2)ek baar me koi 2 se jyada nhi aarha

    method 1)using count method TC->n2
    method 2) using xor Tc=n
    method 3)using binart search TC=logn
*/


#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(mid-1>=0 && arr[mid-1]==target){
            return mid-1;
        }
        if(arr[mid]==target){
            return mid;
        }
        if(mid+1<n&& arr[mid+1]==target){
            return mid+1;
        }
        if(target>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-2;
        }
        mid=start+(end-start)/2;  //ye wala step bht bhool jate hai
    }
    return -1;
}
int main(){
    int arr[]={20,10,30,50,40,70,60};
    int n=sizeof(arr)/sizeof(int);
    // int target=40;
    // int target=20;
    int target=550;
    int ansIndex=BinarySearch(arr,n,target);
    if(ansIndex==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element is present at Index "<<ansIndex<<endl;
    }
    return 0;
}