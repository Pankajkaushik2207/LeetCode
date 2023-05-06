// class Solution {
// public:
//     int expandAroundString(string s, int i, int j){
//         int count = 0;
//         while(i<=0 && j<s.length() && s[i]==s[j]){
//             count++;
//             i--;
//             j++;
//         }
//         return count;
//     }
//     int countSubstrings(string s) {
//         int count = 0;
//         int n = s.length();
//         for(int i=0;i<=n;i++){
//             // odd
//             int oddKaAnswer = expandAroundString(s, i, i);
//             count = count + oddKaAnswer;
            
//             // even
//             int evenKaAnswer = expandAroundString(s, i , i+1);
//             count = count + evenKaAnswer;
//             i++;
//         }
//         return count;
//     }
// };

class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int ans=0;
        
        for(int i=0;i<n;i++){
            int x=i-1,y=i+1;
            ans++;
            while(x>=0 and y<n and s[x]==s[y]){
                ans++;
                x--;
                y++;
            }
             x=i,y=i+1;
            while(x>=0 and y<n and s[y]== s[x]){
                ans++;
                x--;
                y++;
            }
        }
        return ans;
    }
};