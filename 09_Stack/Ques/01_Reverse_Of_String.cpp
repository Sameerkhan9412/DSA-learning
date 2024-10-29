#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="Sameer Khan";
    stack <char>st;
    for(int i=0;i<str.length();i++){
        st.push(str[i]);
    }
    cout<<"Printing reverse:"<<endl;
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    return 0;
}