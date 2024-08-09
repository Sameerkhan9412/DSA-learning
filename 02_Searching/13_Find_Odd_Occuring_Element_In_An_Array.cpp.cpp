#include<iostream>
using namespace std;
int FindOddOccuringElement(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        // single element wala case
        if(start==end) return start;

        // mid check
        if(mid&1){  //fast way to check odd
            if(mid-1>=0 && arr[mid-1]==arr[mid]){
                // right me jao
                start=mid+1;
            }
            else{
                // left me jao
                end=mid+1;
            }
        }
        else{
            if(mid+1<n && arr[mid]==arr[mid+1]){
                // right me jao
                start=mid+2;
            }
            else{
                // ya tho right part me hoo ya fir ans pr hu
                // thats why e=mid krrha hu
                // kyonki e=mid-1; se ans lost hojayega
                end=mid;
            }
        }
        mid=start+(end-start)/2;  //ye wala step bht bhool jata hu
    }
    return -1;
}
int main(){
    int arr[]={10,10,2,2,3,3,2,5,5,6,6,7,7};
    int n=sizeof(arr)/sizeof(int);
    int ansIndex=FindOddOccuringElement(arr,n);
    if(ansIndex==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element is present at Index "<<arr[ansIndex]<<endl;
    }
    return 0;
}