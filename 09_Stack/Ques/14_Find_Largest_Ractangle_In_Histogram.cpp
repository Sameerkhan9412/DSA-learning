
/*
ques:Largest Rectangle in Histogram
ques link:https://leetcode.com/problems/largest-rectangle-in-histogram/
img 1: https://res.cloudinary.com/sameerkhan/image/upload/v1730401664/his1_hv2v2h.png
img 2:https://res.cloudinary.com/sameerkhan/image/upload/v1730401665/his2_mv81br.png
img 3:https://res.cloudinary.com/sameerkhan/image/upload/v1730401665/his3_bzk77t.png
img 4:https://res.cloudinary.com/sameerkhan/image/upload/v1730401664/his4_fddlud.png
*/
class Solution {
public:
    vector<int> nextSmallerElement(vector<int> arr){
        vector<int> ans(arr.size());
        stack<int> st;
        st.push(-1);
        
        for(int i=arr.size()-1;i>=0;i--){
            int curr=arr[i];
            // answer find kro curr ke liye;
            while(st.top()!=-1 && arr[st.top()]>=curr){
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
            
        }
        return ans;
    }

    vector<int> prevSmallerElement(vector<int> arr){
        vector<int> ans(arr.size());
        stack<int> st;
        st.push(-1);
        
        for(int i=0;i<arr.size();i++){
            int curr=arr[i];
            // answer find kro curr ke liye;
            while(st.top()!=-1 && arr[st.top()]>=curr){
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
            
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> next=nextSmallerElement(heights);
        for(int i=0;i<heights.size();i++){
            if(next[i]==-1){
                next[i]=heights.size();
            }
        }

        vector<int> prev=prevSmallerElement(heights);

        vector<int> area(next.size());
        for(int i=0;i<next.size();i++){
            int width=next[i]-prev[i]-1;
            int length=heights[i];
            int currArea=width*length;
            area[i]=currArea;
        }
        int maxi=INT_MIN;
        for(int i=0;i<area.size();i++){
            maxi=max(maxi,area[i]);
        }
        return maxi;
    }
};
