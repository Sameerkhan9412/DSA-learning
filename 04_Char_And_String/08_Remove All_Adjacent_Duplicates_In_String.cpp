// ques link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        string ans;
        int index=0;
        while(index<n){
            if(ans.length()>0 && ans[ans.length()-1]==s[index]){
                // pop from string
                ans.pop_back();
            }
            else{
                // push
                ans.push_back(s[index]);
            }
            index++;
        }
        return ans;
    }
};