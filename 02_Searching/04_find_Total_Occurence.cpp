#include<iostream>
using namespace std;
int LastOccurence(int arr[],int n,int key){
    int start=0,end=n-1,mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
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
    int arr[]={1,2,3,3,4,4,4,4,4,4,4,4,4,4,4,7,8};
    int n=sizeof(arr)/sizeof(int);
    int key=3;
    int ansIndex=LastOccurence(arr,n,key)-FirstOccurence(arr,n,key)+1;//generally bhool jate hai
    if(ansIndex==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Total occurence is "<<ansIndex<<endl;
    }
    return 0;
}