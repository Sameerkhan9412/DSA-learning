// climbing Stair leetcode ques.70

#include<iostream>
using namespace std;

void tranverArray(int arr[],int size,int index){
  if(index>=size) return  ;
  cout<<arr[index]<<endl;
  tranverArray(arr,size,index+1);
}

int main(){
    int arr[]={2,3,4,5,6,7,8,9,11};
    int size=sizeof(arr)/sizeof(int);
    tranverArray(arr,size,0);
    return 0;
}