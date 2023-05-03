class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
        int n=num2.size();
        int m=num1.size();
        for(int i=0;i<n;i++)
        {
            num1.push_back(num2[i]);
        }
        sort(num1.begin(),num1.end());
        double median;
        if((m+n)%2==0)
            median=(num1[(n+m)/2]+num1[((n+m)/2)-1])/2.0;
        else
            median=(num1[(m+n)/2]);
        return median;
    }
};