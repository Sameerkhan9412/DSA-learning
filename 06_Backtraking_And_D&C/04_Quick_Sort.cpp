#include<iostream>
using namespace std;
void quickSort(int arr[],int start,int end){
    if(start>=end) return ;
    int pivot=end;
    int i=start-1;
    int j=start;
    while(j<pivot){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[i],arr[j]);
        }
            j++;
    }
        i++;
        swap(arr[i],arr[pivot]);
        quickSort(arr,start,i-1);
        quickSort(arr,i+1,end);
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={7,2,1,8,6,3,5,4};
    int size=sizeof(arr)/sizeof(int);
    int start=0;
    int end=size-1;
    // before sorting
    cout<<"Before print array"<<endl;
    printArray(arr,size);
    // sorting function
    quickSort(arr,start,end);

    // after sorting

    cout<<"After print array"<<endl;
    printArray(arr,size);

    return 0;

}