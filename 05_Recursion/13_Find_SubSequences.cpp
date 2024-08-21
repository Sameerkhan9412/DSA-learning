#include<iostream>
using namespace std;
void findSubSequences(string str,string output,int index){
    // base case
    if(index>=str.length()) {
        // ans jo h wo output stirng me bngya hai
        cout<<"->"<<output<<endl;
        return;
    }
    
    char ch=str[index];
    // method 1:
    // // exclude
    // findSubSequences(str,output,index+1);
    // // include
    // //output string me ch character ko include krdo
    // output.push_back(ch);
    // findSubSequences(str,output,index+1);
    
    // method 2:
    // include
    output.push_back(ch);
    findSubSequences(str,output,index+1);
    
    // exclude
    output.pop_back();
    findSubSequences(str,output,index+1);
    
}
int main(){
   string str="abc";
   string output="";
   int index=0;
   findSubSequences(str,output,index);
    return 0;
}