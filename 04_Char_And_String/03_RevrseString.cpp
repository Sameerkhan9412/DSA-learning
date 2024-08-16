#include<iostream>
#include<string.h>
using namespace std;
void ReverseString(char ch[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(ch[start],ch[end]);
        start++;
        end--;
    }
    cout<<ch;
}
int main(){
    char ch[100];
    cin>>ch;
    int size=strlen(ch);
    ReverseString(ch,size);
    return 0;
}