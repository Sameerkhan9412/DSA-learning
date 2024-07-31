#include<iostream>
using namespace std;

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void method1(int a[],int n){ 
    for(int i=0;i<n;i++){
        int index=abs(a[i]);
        if(a[index-1]>0){
            a[index-1]*=-1;
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]>0) cout<<i+1<<" ";
    }

    /*
        time complexity:O(n)
        space complexity:O(1)
    */

}

void method2(int a[],int n){    //sorting and swapping
    int i=0;
    while(i<n){
        int index=a[i]-1;
        if(a[i]!=a[index]){
            swap(a[i],a[index]); 
        }
        else{
            i++;
        }

    }
    printArray(a,n);
    for(int i=0;i<n;i++){
        if(a[i]!=i+1) cout<<i+1<<" ";
    }


}

int main(){
    // int a[]={1,3,5,3,5};
    // int a[]={1,3,5,3,4};
    int a[]={5,3,3,3,1};
    int n=sizeof(a)/sizeof(int);
    method2(a,n);
    return 0;
}