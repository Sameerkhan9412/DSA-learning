#include<iostream>
using namespace std;
int ReverseAnArrya(int arr[],int size){
    int start=0,end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    // Printing array
    int i=0;
    while(i<=size-1){
      cout<<arr[i]<<" ";
      i++;
    }
    return 0;

}
int main(){
    int arr[]={2,1,6,3,8,4};
    int size=6;
    ReverseAnArrya(arr,size);
}