class Solution {
public:
    
     
   bool isSubsequence(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();

        int i = 0;
        int j = 0;

        int count = 0;

        while(i < n1 && j < n2)
        {
            if(s[i] == t[j])
            {
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        if(i == n1)
        {
            return true;
        }
        return false;
    }
};