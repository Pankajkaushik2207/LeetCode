class Solution {
public:
    // Function to compare two intervals based on their end times
    static bool compareIntervals(vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
    }

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if (intervals.empty()) return 0;

        // Sort the intervals based on their end times
        sort(intervals.begin(), intervals.end(), compareIntervals);

        int count = 1; // The first interval is always non-overlapping
        int currentEnd = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            // If the current interval overlaps with the previous one, remove it
            if (intervals[i][0] >= currentEnd) {
                count++;
                currentEnd = intervals[i][1];
            }
        }

        // The number of intervals to remove is the total number of intervals minus the non-overlapping intervals
        return intervals.size() - count;
    }
};
