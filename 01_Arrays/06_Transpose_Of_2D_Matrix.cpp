#include<iostream>
using namespace std;

void PrintMatrix(int arr[][3],int rows,int col){
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}
void Transpose(int arr[][3],int rows,int column){
    for(int i=0;i<rows;i++){
        for(int j=0;j<column/2;j++){
            if(arr[i][j]==arr[j][i]) continue;
            swap(arr[i][j],arr[j][i]);
        }
    }
    PrintMatrix(arr,rows,column);

}



int main(){
    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}}; // must gives no.of cols
    int row=3,col=3;
    cout<<"Before Transpose"<<endl;
    PrintMatrix(arr,row,col);
    cout<<"After Transpose"<<endl;
    Transpose(arr,row,col);
    return 0;
}