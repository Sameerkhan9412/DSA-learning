// Online C++ compiler to run C++ program online

/*
    String:Collection of character
*/
#include <iostream>
#include<string.h>
using namespace std;
int findLength(char ch[],int size){
    int length=0;
    for(int i=0;i<size;i++){
        if(ch[i]=='\0') {
            break;
        }
        else{
            length++;
        }
    }
    return length;
}
int main() {
    // Write C++ code here
//   char ch[10];
//   cin.getline(ch,10);
//   cout<<ch;

    // String
    char ch[100];
    cin>>ch;    //sameer khan
    // cin.getline(ch,100);// then whitespace is also react
    int length=findLength(ch,100);
    cout<<"length of character "<<length<<endl;/// 6
    cout<<"lenth of cpp strlen stl func:"<<strlen(ch);// for this you need to include string header file

    string str;
    getline(cin,str);//sameer  khan
    cout<<str;  //sameer khan

    //must learn strings all functions
    return 0;
}