class node{
    public:
    char data;
    int count;

 node(char d, int c) {
    data = d; // Corrected from d = data;
    count = c; // Corrected from c = count;
}

};

class compare{
    public:
    bool operator()(node a,node b){
        return a.count<b.count;
    }
};

class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<node,vector<node>,compare>mh;
        if(a > 0){
            node temp('a', a);
            mh.push(temp);
        }
        if(b > 0){
            node temp('b',b);
            mh.push(temp);
        }
        if(c > 0){
            node temp('c',c);
            mh.push(temp);
        }

        string ans="";

        while(mh.size() > 1){
            node first = mh.top();
            mh.pop();
            node second = mh.top();
            mh.pop();
           

           if (first.count >= 2) {
    ans += first.data;
    ans += first.data;
    first.count -= 2;
} else {
    ans += first.data;
    first.count--;
}

if (second.count >2 && second.count>=first.count) {
    ans += second.data;
    ans += second.data;
    second.count-=2;
}
            
            
            
            else {
    ans += second.data;
    second.count--;
}

// Update the counts of first and second nodes in the priority queue
if (first.count > 0) {
    mh.push(first);
}

if (second.count > 0) {
    mh.push(second);
}

                    }

                    if(mh.size()==1){
                        node temp = mh.top();
                        mh.pop();
                        if(temp.count>=2){
                            ans+=temp.data;
                            ans+=temp.data;
                            temp.count -=2;
                        }else{
                            ans+=temp.data;
                            temp.count--;
                        }
                    }

        return ans;
    }
};