#include<iostream>
#include<vector>
using namespace std;
void RotateArray(vector<int> arr,int k){
    int n=arr.size();
    vector<int> newArr(n,3);
    for(int index=0;index<arr.size();index++){  //⭐jab bhi ques me circular jana ho first try to do with modulas
        int newIndex=(index+k)%n;
        newArr[newIndex]=arr[index];
    }
    // printing
    for (int i = 0; i < newArr.size(); i++)
    {
        cout<<newArr[i];
    }
    
}
int main(){
    vector<int> arr={2,3,4,5,6,7};
    int k=3;
    RotateArray(arr,k);
    return 0;
}