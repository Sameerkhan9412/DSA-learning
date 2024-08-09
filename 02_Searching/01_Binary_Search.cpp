#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
    int start=0,end=n-1,mid=(end+start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;  //ye wala step bht bhool jate hai
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(int);
    int key=7;
    int ansIndex=BinarySearch(arr,n,key);
    if(ansIndex==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element is present at Index "<<ansIndex<<endl;
    }
    return 0;
}