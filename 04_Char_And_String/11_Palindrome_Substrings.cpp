// ques link:https://leetcode.com/problems/palindromic-substrings/description/


class Solution {
public:
    int expand(string s,int i,int j){
        int count=0;
        while(i>=0&&j<s.length()&&s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {//importaind approach , interview point of view
        int totalCount=0;
        for(int center=0;center<s.length();center++){
            // ODD case
            int oddKaAns=expand(s,center,center);
            // even case
            int evenKaAns=expand(s,center,center+1);
            totalCount=totalCount+oddKaAns+evenKaAns; 
        }
        return totalCount;
    }
};