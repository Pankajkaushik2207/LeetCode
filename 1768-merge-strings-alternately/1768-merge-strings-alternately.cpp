class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
         int n= word1.size(),m=word2.size();
        if(n<m){
            for(int i=0;i<n;i++){
                ans.push_back(word1[i]);
                ans.push_back(word2[i]);
            }
            for(int i=n;i<m;i++){
                ans.push_back(word2[i]);
            }
            
        }else if(n==m){
             for(int i=0;i<n;i++){
                ans.push_back(word1[i]);
                ans.push_back(word2[i]);
            }
        }else{
             for(int i=0;i<m;i++){
                ans.push_back(word1[i]);
                ans.push_back(word2[i]);
            }
             for(int i=m;i<n;i++){
                ans.push_back(word1[i]);
            }
        }
        return ans;
    }
};