#include<iostream>
using namespace std;
int fib(int n){
    // base case
    if(n==0) return 0;
    if(n==1) return 1;
    //recursive relation
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cout<<"Program to find fibonacci"<<endl;
    cin>>n;
    cout<<"The Factorial Of "<<n<<"is "<<fib(n);
}