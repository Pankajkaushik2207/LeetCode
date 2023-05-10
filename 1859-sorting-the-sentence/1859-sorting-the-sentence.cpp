class Solution {
public:
    string sortSentence(string s) {
        stringstream ss(s);
        string word;
        map<int,string> temp;
        while(ss>>word)
        {
            temp[word[word.size()-1]]=word.substr(0,word.size()-1);
        }
        string ans="";
        for(auto x:temp)
        {
            ans = ans + x.second +" ";
        }
        ans.pop_back();
        return ans;
    }
};