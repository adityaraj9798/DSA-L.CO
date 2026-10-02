class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int j=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==j){
                j++;
            }
            else if(nums[i]>j){
                ans.push_back(j);
                j++;
                i--;
            }
        }
        while(j<=n){
            ans.push_back(j);
            j++;
        }
        return ans;
    }
};