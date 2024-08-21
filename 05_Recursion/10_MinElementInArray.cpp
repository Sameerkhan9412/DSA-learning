// climbing Stair leetcode ques.70

#include<iostream>
#include<limits>
using namespace std;

void findMin(int arr[],int size,int index,int &mini){
    // base case
  if(index>=size) return  ;

//   processing
    mini=min(arr[index],mini);

    // recursive call
    findMin(arr,size,index+1,mini);
}

int main(){
    int arr[]={2,3,4,5,6,7,8,9,11};
    int size=sizeof(arr)/sizeof(int);
    int mini=INT_MAX;// ise bhul jata hu
    findMin(arr,size,0,mini);
    cout<<"Minimum elemetn in array is "<<mini;
    return 0;
}