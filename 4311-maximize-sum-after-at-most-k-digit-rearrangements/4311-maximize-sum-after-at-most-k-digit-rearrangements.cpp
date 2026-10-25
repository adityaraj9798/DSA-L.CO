class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long sum=0;
        int n=nums.size();
        vector<int>gains;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            string s=to_string(nums[i]);
            sort(s.begin(),s.end(),greater<char>());
            int newsum=stoi(s);
            gains.push_back(newsum-nums[i]);
        }
        sort(gains.begin(),gains.end(),greater<int>());
        for(int i=0;i<k;i++){
            sum+=gains[i];
        }
        return sum;
    }
};