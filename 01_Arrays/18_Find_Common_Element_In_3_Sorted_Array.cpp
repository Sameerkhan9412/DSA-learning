
// pending me hai baad me krenge

// ques. link:https://www.geeksforgeeks.org/problems/common-elements1132/1


#include<iostream>
using namespace std;

void method1(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3){
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
                if(arr1[i]==arr2[j]){
                    cout<<arr1[i]<<" "<<endl;
                } 
            for(int k=0;k<n3;k++){
                if((arr1[i]==arr2[j])&&(arr1[j]==arr3[k])){
                    cout<<arr1[i]<<" ";
                } 
            }  
        }
    }

}


void method2(int arr1[],int arr2[],int arr3[],int n1,int n2,int n3){
    int ans[];
    int i,j,k;
    while(i<n1&&j<n2&&k<n3){
        if(arr1[i]==arr2[k]&&arr2[2]==arr3[k]){
            cout<<arr1[i]<<" ";
            i++,j++,k++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr3[k]){
            j++;
        }
        else{
            k++;
        }
    }
}

int main(){
    int arr1[]={1,5,10,20,40,80};
    int arr2[]={6,7,20,80,100};
    int arr3[]={3,4,15,20,30,70,80,120};
    int n1=sizeof(arr1)/sizeof(int);
    int n2=sizeof(arr2)/sizeof(int);
    int n3=sizeof(arr3)/sizeof(int);
    // method1(arr1,arr2,arr3,n1,n2,n3);
    method2(arr1,arr2,arr3,n1,n2,n3);
    return 0;
}