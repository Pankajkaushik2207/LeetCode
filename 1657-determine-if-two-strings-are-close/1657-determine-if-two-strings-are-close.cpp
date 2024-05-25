class Solution {
public:
    bool closeStrings(string w1, string w2) {
        map<int,int> m1,m2;
        vector<int> q1,q2,v1(26),v2(26); 
        for(int i=0;i<w1.size();i++){
            m1[w1[i]]++;
            v1[w1[i]-'a']=1;
        }
        for(auto x: m1){
            q1.push_back(x.second);
        }
        for(int i=0;i<w2.size();i++){
            m2[w2[i]]++;
            v2[w2[i]-'a']=1;
        }
        for(auto x: m2){
            q2.push_back(x.second);
        }
        sort(q1.begin(),q1.end());
        sort(q2.begin(),q2.end());
        if(q1!=q2 ) return false;
        if(v1!=v2) return false;
        return true;
    }
};