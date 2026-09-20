class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int count=0;
        sort(intervals.begin(),intervals.end());
        for(int i=0;i<=n-2;i++){
            for(int j=i+1;j<=n-1;j++){
                if(intervals[j][0]<=intervals[i][1]){
                    count++;
                }
            }
        }
        return count;
    }
};