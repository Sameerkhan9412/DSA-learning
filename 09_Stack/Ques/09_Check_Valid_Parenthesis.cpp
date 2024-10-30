sol img1:https://res.cloudinary.com/sameerkhan/image/upload/v1730276325/Screenshot_2024-10-30_094241_bc8ggc.png
    img2:https://res.cloudinary.com/sameerkhan/image/upload/v1730276325/Screenshot_2024-10-30_093544_qsvf7j.png
    img3:https://res.cloudinary.com/sameerkhan/image/upload/v1730276325/Screenshot_2024-10-30_094241_bc8ggc.png

class Solution {
public:
    bool isValid(string s) {
       stack <char> st;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='('||ch=='{'||ch=='['){
                // for open bracket, we will push
                st.push(ch);
            }
            else{
                if(!st.empty()){
                    // closing bracket
                    if(ch==')' && st.top()=='('){
                        st.pop();
                    }
                    else if(ch=='}' && st.top()=='{'){
                        st.pop();
                    }
                    else if(ch==']' &&st.top()=='['){
                        st.pop();
                    }
                    else{
                        // no match
                        return false;
                    }

                }
                else{
                    return false;
                }
            }
        }
            if(st.size()==0){
                return true;
            }
            else{
                return false;
            }
    }
};
