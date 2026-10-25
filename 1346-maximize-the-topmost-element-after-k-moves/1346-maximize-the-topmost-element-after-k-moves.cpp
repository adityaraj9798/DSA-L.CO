class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1){
            if(k%2==0) return nums[0];
            else return -1;
        }
        if(k==1) return nums[1];
        int maxele=* max_element(nums.begin(),nums.end());
        if(k>n) return maxele;
        int ans=-1;
        for(int i=0;i<k-1;i++){
            ans=max(ans,nums[i]);
        }
        if(k<n) ans=max(ans,nums[k]);
        return ans;
    }
};