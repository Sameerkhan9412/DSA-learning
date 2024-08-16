// ques link:https://leetcode.com/problems/find-and-replace-pattern/description/
class Solution {
public:
    void createMapping(string &str){
        // find mapping
        char start=' ';
        char mapping[300]={0};
        for(auto ch:str){
            if(mapping[ch]==0){
                mapping[ch]=start;
                start++;
            }
        }
        // update the string
        for(int i=0;i<str.length();i++){
            char ch=str[i];
            str[i]=mapping[ch];
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        // first normalize the pattern
        createMapping(pattern);

        // saare words k saaath khelna hai
        for(string s:words){
            string tempString=s;

            // normalize tempstring
            createMapping(tempString);
            if(tempString==pattern){
                ans.push_back(s);
            }
        }
        return ans;
    }
};