class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        long long count=0;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<int>starts;
        for(int i=0;i<n;i++) {
            starts.push_back(intervals[i][0]);
        }
        for(int i=0;i<n;i++) {
            int end=intervals[i][1];
            int index=upper_bound(
                starts.begin()+i+1,starts.end(),end)-starts.begin();
            count+=index-i-1;
        }
        return count;
    }
};