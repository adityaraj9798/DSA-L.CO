class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            ans.push_back(nums[i]);
        }
        for(int j=n-1;j>=0;j--){
            ans.push_back(nums[j]);
        }
        return ans;
    }
};