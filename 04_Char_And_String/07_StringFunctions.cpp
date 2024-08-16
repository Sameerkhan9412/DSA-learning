#include<iostream>
using namespace std;
int main(){
    string str1="Sameer";
    string str2="Khan";
    // append  
    cout<<"before appending:"<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;

    str1.append(str2);

    cout<<"after appending:"<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;

    


    return 0;
}