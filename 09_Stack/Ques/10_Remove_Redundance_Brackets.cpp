// Online C++ compiler to run C++ program online
#include <iostream>
#include<stack>
// img 1:https://res.cloudinary.com/sameerkhan/image/upload/v1730278341/Screenshot_2024-10-30_142007_pdsnlr.png
// img22: https://res.cloudinary.com/sameerkhan/image/upload/v1730278429/7939FB15-6219-46BF-AC01-BF56192AC91B_dravkn.png
using namespace std;
bool checkRedundance(string &str){
    stack<char> st;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='(' || ch=='+' ||ch=='-' || ch=='/' || ch=='*'){
            st.push(ch);
        }
        else if(ch==')'){
            int operatorCount=0;
            while(!st.empty() && st.top()!='('){
                char temp=st.top();
                if(temp=='+' || temp=='-' || temp=='*' || temp=='/'){
                    operatorCount++;
                }
                st.pop();
            }
            // yha pr tbhi phuchege jb stack k top pr opening bracket hoga
            st.pop();
            if(operatorCount==0){
                return true;
            }
        }
    }
    // agr me yahan tk paucha , iska mtlb, hr ek bracket ke pair k beech me ek operator pkka mila hoga
    return false;
}

int main() {
   string str="(((a+b)*(c+d)))";
   bool ans=checkRedundance(str);
   if(ans==true){
       cout<<"Redundace bracket present"<<endl;
   }
   else{
       cout<<"Redundace bracket is not present"<<endl;
   }

    return 0;
}
