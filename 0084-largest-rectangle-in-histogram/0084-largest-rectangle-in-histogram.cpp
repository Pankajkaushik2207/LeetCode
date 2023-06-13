// class Solution {
// public:
//     vector<int> prevSmallerElement(vector<int> &b){
//         stack<int> s;
//         s.push(-1);
//         vector<int> ans(b.size());
//         for(int i=0;i<=b.size();i++){
//             int curr=b[i];    
//          while(s.top()!=-1&&b[s.top()]>=curr){
//             s.pop();
//             }
//             ans[i]=s.top();
//             s.push(i);
//         }
//         return ans;
//     }
//      vector<int> nextSmaller(vector<int> &b){
//         stack<int> s;
//         s.push(-1);
//         vector<int> ans(b.size());
//         for(int i=b.size()-1;i>=0;i--){
//             int curr=b[i];
//             while(s.top()!=-1&&b[s.top()]>=curr){
//                 s.pop();
//             }
//             ans[i]=s.top();
//             s.push(i);
//         }
//         return ans;
//     }
//     int largestRectangleArea(vector<int>& heights) {
//         vector<int> prev=prevSmallerElement(heights);
//         vector<int> next=nextSmaller(heights);
//         int size=heights.size();
//         int maxArea=INT_MIN;
        
//         for(int i=0;i<=heights.size();i++){
//             int length=heights[i];
//             if(next[i]==-1){
//                 next[i]=size;
//             }
//             int width=next[i]-prev[i]-1;
//             int area=length*width;
//             maxArea=max(maxArea,area);   
//         }
//         return maxArea;
//     }
// };
class Solution {
public:
    vector<int> nextsmaller(vector<int> &v){
    stack<int> st;
    st.push(-1);
    vector<int> ans(v.size());
    for(int i=v.size()-1;i>=0;i--){
        int curr=v[i];
        while(st.top()!=-1&&v[st.top()]>=curr){
            st.pop();
        }
        ans[i]=st.top();
        st.push(i);
    }
    return ans;
    }
    vector<int> prevsmaller(vector<int> &v){
        stack<int> st;
        st.push(-1);
        vector<int> ans(v.size());
        for(int i=0;i<v.size();i++){
            int curr=v[i];
            while(st.top()!=-1&&v[st.top()]>=curr){
                st.pop();
            }
            ans[i]=st.top();
            st.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> prev=prevsmaller(heights);
        vector<int> next=nextsmaller(heights);
        int size=heights.size();
        int maxlen=INT_MIN;
        for(int i=0;i<heights.size();i++){
            int len=heights[i];
            if(next[i]==-1)
                next[i]=size;
            int width=next[i]-prev[i]-1;
            int area=len*width;
            maxlen=max(maxlen,area);
        }
        return maxlen;
    }
};