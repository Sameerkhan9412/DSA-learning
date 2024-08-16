// ques link: https://leetcode.com/problems/decode-the-message/submissions/1357279025/
class Solution {
public:
    string decodeMessage(string key, string message) {
        // create mapping
        char start='a';
        char mapping[280]={0};
        for(auto ch:key){
            if(ch!=' ' && mapping[ch]==0){
                mapping[ch]=start;
                start++;
            }
        }
        // use mapping
        string ans;
        for(int i=0;i<message.length();i++){
            char ch=message[i];
            if(ch==' '){
                ans.push_back(' ');
            }
            else{
                char decodedChar=mapping[ch];
                ans.push_back(decodedChar);
            }
        }
        return ans;
    }
};