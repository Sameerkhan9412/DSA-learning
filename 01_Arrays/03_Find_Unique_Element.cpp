#include<iostream>
using namespace std;
int FindUnique(int arr[],int size){
    int ans=0;
    int i=0;
    while(i<size){
        ans^=arr[i];
        cout<<"this is"<<arr[i]<<" "<<ans;
        i++;
    }
    return ans;
}
int main(){
    int arr[]={2,10,11,13,10,2,15,13,15};
    int size=9;

    // int arr[]={1,2,3,5,5};
    // int size=5;
    cout<<FindUnique(arr,size);
    return 0;
}