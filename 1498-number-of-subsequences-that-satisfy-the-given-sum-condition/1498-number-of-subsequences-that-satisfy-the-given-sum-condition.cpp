class Solution {
public:
    int numSubseq(vector<int>& a, int t) {
        
        sort(a.begin(),a.end());
        
        // powers array to precomputer powers of 2 with mod
        int powers[100001]={};
        
        // pow(2,0)=1
        powers[0]=1;
        
        int mod=1000000007;
        
        for(int i=1;i<100001;i++){
            // calculating power for every i
            powers[i]=(powers[i-1]*2)%mod;
        }
        long long int ans=0;
        for(int i=0;i<a.size();i++){
            // defining ranges for every i
            int l=i,r=a.size()-1,ind=-1;
            while(l<=r){
                int mid=(l+r)/2;
                // if a[mid]+a[i]<=targt then we can increase the value of l 
                if(a[mid]+a[i]<=t){
                    ind=max(ind,mid);
                    l=mid+1;
                }
                // else we have to decrease value of r 
                else{
                    r=mid-1;
                }
            }
            
            // edge case (if there is no such value (target-a[i]) does not exist then we will not compute for this i and every i greater than this one
            if(ind!=-1){
                
                // subtract the value of i from ind and add the power to the answer 
                ind-=i;
                
                ans=(ans+powers[ind])%mod;
                
            }
            
            else{
                break;
            }
        }
        
        return ans;
    }
};