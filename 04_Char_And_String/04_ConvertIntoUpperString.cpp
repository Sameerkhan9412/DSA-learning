#include<iostream>
#include<string.h>
using namespace std;
void Uppercase(char ch[],int size){
    int index=0;
    while(ch[index]!='\0'){
        char currCharacter=ch[index];
        // check if lowercase , then convert to uppercase
        if(currCharacter>='a' && currCharacter<='z'){
            ch[index]=currCharacter-'a'+'A';
        }
        index++;
    }
    cout<<ch;
}
int main(){
    char ch[100];
    cin>>ch;
    int size=strlen(ch);
    Uppercase(ch,size);
    return 0;
}