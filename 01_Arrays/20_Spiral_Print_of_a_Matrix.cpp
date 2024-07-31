/*
    1   2   3
    4   5   6
    7   8   9
    ->  1   2   3   6   9   8   7   4   5

    1   2   3
    4   5   6
    7   8   9
    10  11  12
    ->  1   2   3   6   9   12  11  10  7   4   5   8 


ques link:https://leetcode.com/problems/spiral-matrix/
*/



class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int total_element=m*n;

        int startingRow=0;
        int endingCol=n-1;
        int endingRow=m-1;
        int startingCol=0;

        int count=0;
        while(count<total_element){
            // printing Starting ka row
            for(int i=startingCol;i<=endingCol && count<total_element;i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
             // printing end col
            for(int i=startingRow;i<=endingRow && count<total_element;i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            // printing ending row
            for(int i=endingCol;i>=startingCol && count<total_element;i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            // print Starting col
            for(int i=endingRow;i>=startingRow && count<total_element;i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
    return ans;
    }
};