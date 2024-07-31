#include<iostream>
using namespace std;

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void moveAllNegativeToLeft(int a[],int n){ // 🟢Dutch national flag algorithm
    int left=0,right=n-1;
    while(left<right){
        if(a[left]<0) left++;
        else if(a[right]>=0) right--;
        else swap(a[left],a[right]);
    }
    printArray(a,n);
}
int main(){
    int a[]={1,2,-3,4,-5,6,0,3,-4};
    int n=sizeof(a)/sizeof(int);
    cout<<n;
    moveAllNegativeToLeft(a,n);
    return 0;
}