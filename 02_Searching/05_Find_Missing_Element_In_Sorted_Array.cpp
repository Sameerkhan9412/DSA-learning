#include<iostream>
using namespace std;
int FindMissing(int arr[],int n){
    int start=0,end=n-1,mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        int diff=arr[mid]-mid;
        if(diff==1){
            // right me jao
            start=mid+1;
        }
        else {
            // ans store
            ans=mid;
            // left me jao
            end=mid-1;
        }
        mid=start+(end-start)/2;  //ye wala step bht bhool jate hai
    }
    if(ans+1==0) return n+1;
    return ans+1;
}
int main(){
    // int arr[]={1,2,4,5,6,7,8,9};
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(int);
    int ansIndex=FindMissing(arr,n);
    if(ansIndex==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"this element is missing  "<<ansIndex<<endl;
    }
    return 0;
}