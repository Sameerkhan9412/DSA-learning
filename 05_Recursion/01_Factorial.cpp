#include<iostream>
using namespace std;
int Fact(int n){
    int ans;
    int i=0;
    while(i<=n){
        if(n==0||n==1) return 1;
        ans=n*Fact(n-1);
        i++;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Program to find factorial"<<endl;
    cin>>n;
    cout<<"The Factorial Of "<<n<<"is "<<Fact(n);
}