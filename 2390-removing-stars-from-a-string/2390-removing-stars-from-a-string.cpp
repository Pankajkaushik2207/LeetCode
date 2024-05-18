class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        
        for(int i=0;i<s.length();i++){
           
           if(s[i]=='*'){
              st.pop();
           }

           else{
           st.push(s[i]);
           }

           
        }
        stack<char> st1;
        while(!st.empty()){
           st1.push(st.top());
            st.pop();
        }
       string st2;
        while(!st1.empty()){
           st2.push_back(st1.top());
            st1.pop();
        }
         return st2;
    }
};