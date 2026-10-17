class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            unordered_set<int>product;
            for(int j=i;j<nums.size();j++){
                product.insert(nums[j]);
                sum+=(product.size()*product.size());
            }
        }
        return sum;
    }
};