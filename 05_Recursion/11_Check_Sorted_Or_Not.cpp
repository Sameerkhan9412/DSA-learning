#include<iostream>
using namespace std;
bool checkSortedOrNot(int arr[],int size,int index){
    if(index>=size){
        return true;
    }
    if(arr[index]>arr[index-1]){
        return checkSortedOrNot(arr,size,index+1);
    }
    else{
        return false;
    }

}
int main(){
    // int arr[]={10,20,30,40,50};
    int arr[]={10,20,30,80,50};
    int size=sizeof(arr)/sizeof(int);
    int index=1;
    if(checkSortedOrNot(arr,size,index)){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
}