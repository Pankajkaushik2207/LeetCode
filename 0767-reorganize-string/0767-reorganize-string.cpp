class node{
    public:
    char data;
    int count;
    
    node(char d,int c){
        data = d;
        count =c;
    }
};

class compare{
    public:
    bool operator()(node a, node b){
        return a.count<b.count;
    }
};


class Solution {
public:
    string reorganizeString(string s) {
//         with the help of heap
        int freq[26]={0};
        for(int i=0;i<s.length();i++){
            char ch =s[i];
            freq[ch-'a']++;
        }
        
//         creating max heap
        priority_queue<node, vector<node>, compare>mh;
        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                node temp(i+'a',freq[i]);
                mh.push(temp);
                
            }
        }
        
        string ans= "";
        
        while(mh.size()>1){
            node first = mh.top();
            mh.pop();
            node second = mh.top();
            mh.pop();
            
            ans+= first.data;
            ans+=second.data;
            
            first.count--;
            second.count--;
            if(first.count!=0){
                mh.push(first);
                
            }
            if(second.count!=0){
                mh.push(second);
                
            }
        }
        
        if(mh.size()==1){
            node temp = mh.top();
            mh.pop();
            if(temp.count==1){
                ans+=temp.data;
            }
            else{
                return "";
            }
        }
        return ans;
    }
};