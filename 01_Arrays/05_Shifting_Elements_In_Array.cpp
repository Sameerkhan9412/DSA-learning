#include<iostream>
using namespace std;
void ShiftingElements(int arr[],int size){
    int temp=arr[size-1];
    for(int i=size-1;i>0;i--){
        swap(arr[i],arr[i-1]);
    }
    arr[0]=temp;

    // priting array
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={2,4,5,6,7,8,9};
    int size=7;
    ShiftingElements(arr,size);
}
// 2,4,5,6,7,8,9 temp
// 2,2,5,6,7,8,9 temp4
// 4 5 6 7 8 9 2
