/*
    character array: collection of element which is null terminated
*/

#include<iostream>
using namespace std;
int findLength(char ch[],int size){
    int length=0;
    for(int i=0;i<size;i++){
        if(ch[i]=='\0') return length ;
        length++;
    }
    return 0;
    
}
int main(){
    // creation of array
    // char ch[10];
    // take inputs 1 way
    // for(int i=0;i<10;i++){
    //     cin<<ch[i];
    // }

    // take input way 2:
    // cin>>ch;

    // print on console
    // way 1:
    // for(int i=0;i<10;i++){
    //     cin<<ch[i];
    // }

    // way 2:
    // cout<<ch;   //it ignore all the text after a " " (whitespace occurs) or tab or enter press these all the delemeter
    /*
        Deltemeter of character string
        1. \n enter or nextline
        2.\t tab
        3.' ' whitespace

        to solve these problems
        we use cin.getline(variableName,mexSizeOfArray)
     */
    // cin.getline(ch,10);
    // cout<<ch[10];

    /*
        String declaration: string variableName; which means we have created a variable of type string
        string:collection of character or sequence of character.character array have static nature while string have dynamic nature because we can change on it during run time and it is also null terminated.
    */
    return 0;
}