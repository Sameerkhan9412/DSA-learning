// noon    tapat
#include<iostream>
#include<string.h>
using namespace std;
bool checkPalindrome(char ch[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        if(ch[start]==ch[end]){
            start++;
            end--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    char ch[100];
    cin>>ch;
    int size=strlen(ch);
    if(checkPalindrome(ch,size)){
        cout<<"numbr is palindrome";
    }
    else{
        cout<<"No palindrome";
    }
    return 0;
}