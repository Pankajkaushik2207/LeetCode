class Solution {
public:
    int recSol(int n){
        if(n==0||n==1){
            return n;
        }
        int ans=fib(n-1)+fib(n-2);
        return ans;
    }
    int fib(int n) {
        int ans= recSol(n);
        return ans;
    }
};