#include<iostream>
using namespace std;
int Pow(int n){
    int ans;
    int i=0;
    while(i<=n){
        if(n==0) return 1;
        ans=2*Pow(n-1);
        i++;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Program to find power of 2"<<endl;
    cin>>n;
    cout<<"The ans Of "<<n<<"is "<<Pow(n);
}