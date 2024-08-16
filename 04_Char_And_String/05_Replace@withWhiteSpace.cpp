#include<iostream>
#include<string.h>
using namespace std;
void replace(char ch[],int size){
    int index=0;
    while(ch[index]!='\0'){
        int currCharacter=ch[index];
        if(currCharacter=='@'){
            ch[index]=' ';  //" " not use
        }
        index++;    //increament krna bhool jta h
    }
    cout<<ch;
}
int main(){
    char ch[100];
    cin>>ch;
    int size=strlen(ch);
    replace(ch,size);
    return 0;
}