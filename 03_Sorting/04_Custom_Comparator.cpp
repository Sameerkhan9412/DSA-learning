/*
    -----------------------------CUSTOM COMPARATOR--------------------------------------
        In C++ , we use STL function for sorting .ex sort(arrayName.begin(),arrayName.end())

        ex. arr[];
            sort(a,a+n)

*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void print(vector<int> arr){
    int i=0;
    while(i<arr.size()){
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;
}

void printVector(vector<vector<int>> &v){
    for(int i=0;i<v.size();i++){
        vector<int> &temp=v[i];
        int a=temp[0];
        int b=temp[1];
        cout<<a<<" "<<b<<" "<<endl;
    }
    cout<<endl;
}

bool myComp(int &a,int &b){
    // return a<b;     //increasing order sorting
    return a>b;     //it will sort in decreasing order

}

bool myComparatorFor1stIndex(vector<int> &a,vector<int> &b){    // taking vector params with address is best practice
    // return a[0]<b[0];   //(by default) abhi ye horha hai like sort on the vasis of 0th index element
    return a[1]>b[1];
    
}

int main(){
    /*
    vector<int> v={44,55,22,11,33};
    // sort(v.begin(),v.end());    //it wil sort in increading order
    sort(v.begin(),v.end(),myComp);    //here myComp is a paramenter whoe return type is boolean and here comparator means app bataoge kaise sort karna h
    print(v);
    return 0;\*/

    // vector of vector
    vector<vector<int>> v;
    int n;
    cout<<"Enter Size:";
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cout<<"Enter a and b:"<<endl;
        cin>>a>>b;
        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    cout<<"Here are values:"<<endl;
    printVector(v);
    cout<<"Sort by first Index:"<<endl;
    // sort(v.begin(),v.end());//it will sort element on the basie 0th index
    
    sort(v.begin(),v.end(),myComparatorFor1stIndex);//it will sort element on the basie 0th index
    
    printVector(v);
    return 0;
}