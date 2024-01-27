// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int l = 0 , r = n-1;

// if total version is 1 then bad version will be the that only one.
       if (n ==1)
       {
           return 1;
       }
//Normal binary algorithm
       while (l<=r)
       {
           int mid = l+(r-l)/2;
           if (isBadVersion(mid))
           {
               r = mid-1;
           }
           else {
                l = mid+1;
            }
       }
       return l;
    }
};