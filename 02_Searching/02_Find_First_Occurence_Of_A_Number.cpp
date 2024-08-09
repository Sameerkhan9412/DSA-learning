#include<iostream>
using namespace std;
int FirstOccurence(int arr[],int n,int key){
    int start=0,end=n-1,mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;  //ye wala step bht bhool jate hai
    }
    return ans;
}
int main(){
    int arr[]={4,4,4,4,4,4,4,4,4,4,7,8};
    int n=sizeof(arr)/sizeof(int);
    int key=4;
    int ansIndex=FirstOccurence(arr,n,key);
    if(ansIndex==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element first Occurence is present at Index "<<ansIndex<<endl;
    }
    return 0;
}