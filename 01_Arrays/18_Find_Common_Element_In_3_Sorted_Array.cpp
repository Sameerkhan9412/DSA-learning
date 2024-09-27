
// pending me hai baad me krenge

// ques. link:https://www.geeksforgeeks.org/problems/common-elements1132/1

// this is pass 1210/1215 test cases on gfg
// method 1: isme duplicate bhi add honge that why saare test case nhi chal rhe
class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        int i=0,j=0,k=0;
        vector<int> ans;
        while(i<arr1.size() && j<arr2.size() && k<arr3.size()){
            if((arr1[i]==arr2[j]) && (arr2[j]==arr3[k])){
                ans.push_back(arr1[i]);
                i++;
                j++;
                k++;
            }
            else if(arr1[i]<arr2[j]){
                 i++;   
            }
            else if(arr2[j]<arr3[k]){
                j++;
            }
            else{
                k++;
            }
            
        }
        return ans;
    }
};


// method 2://sab same hai sirf duplicates ko add nhi kiya hai, isse 1215 test case success horhe hai

class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        int i=0,j=0,k=0;
        vector<int> ans;
        while(i<arr1.size() && j<arr2.size() && k<arr3.size()){
            if((arr1[i]==arr2[j]) && (arr2[j]==arr3[k])){
                // Avoid duplicates
            if (ans.empty() || ans.back() != arr1[i]) {    // ye hai wo condition, ise bhul jate hai
                ans.push_back(arr1[i]);
            }
                i++;
                j++;
                k++;
            }
            else if(arr1[i]<arr2[j]){
                 i++;   
            }
            else if(arr2[j]<arr3[k]){
                j++;
            }
            else{
                k++;
            }
            
        }
        return ans;
    }
};
