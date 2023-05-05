// class Solution {
// public:
//     int findMinDifference(vector<string>& timePoints) {
//        //Step1: convert time string into minutes integer value
//         vector<int>minutes;
        
//         for(int i =0; i<=timePoints.size();i++){
//             string time = timePoints[i];
//             int hour = stoi(time.substr(0,2));
//             int min = stoi(time.substr(3,2));
//             int totalTime = hour*60 + min;
//             minutes.push_back(totalTime);
//         }
//         //step2: sort
//         sort(minutes.begin(),minutes.end());
//         //Step3:-diff and calculate minimum diff
//         int mini = INT_MAX;
//          int n= minutes.size();
//         for(int i = 0;i<=n-1;i++){
//             int diff = minutes[i+1] - minutes[i];
//             mini = min(mini,diff);
//         }
//         //something missing
//         int lastDiff = (minutes[0] + 1440) - minutes[n-1];
//            mini = min(mini,lastDiff);
//         return mini;
//     }
// };


class Solution {
public:
    int getIntTime(const string &x) {
        string s;
        stringstream ss(x);
        int t = 0;
        int ret = 0;
        while(getline(ss, s, ':')) {
            ++t;
            if (t == 1) {
                ret = 60 * stoi(s);
            } else {
                ret += stoi(s);    
            }
        }
        return ret;
    }
    int findMinDifference(vector<string>& timePoints) {
        vector<int> res;
        for (const string &x: timePoints) {
            int ret = getIntTime(x);
            res.push_back(ret);
            res.push_back(ret + 1440);
        }
        sort(begin(res), end(res));
        int ans = INT_MAX;
        for (int i = 0; i < res.size(); ++i) {
            if (i) {
                ans = min(ans, res[i] - res[i - 1]);
            }
        }
        return ans;
    }
};