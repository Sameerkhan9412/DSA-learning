/* ------------------------------------------------------------------
    input:  10  20  30  40  50  60
    output: 10  60  20  50  30  40
    ----------------------------------------------------------------*/

#include<iostream>
using namespace std;
void Extreme_Print(int arr[],int size){
    int start=0,end=size-1;
    while (start<=end)
    {   
        if(start==end){
            cout<<arr[start];
            return;
        }
        cout<<arr[start]<<" "<<arr[end]<<" ";
        start++;
        end--;
    }
}
int main(){
    int arr[]={2,1,6,3,4};
    int size=5;
    Extreme_Print(arr,size);
}