class Solution {
public:
    string addBinary(string s, string t) {
        int n = s.length();
        int m = t.length();

        string res;
        int i=n-1;
        int j=m-1;
        int prev=0;

        while(i>=0 || j>=0)
        {
            int curr = (i>=0?(s[i--]-'0'):0)+(j>=0?(t[j--]-'0'):0)+(prev);
            res+=(curr%2+'0');
            prev = curr/2;
        }


        if(prev){
            res+=(prev+'0');
        }
        reverse(res.begin(),res.end());
        return res;
    }
};