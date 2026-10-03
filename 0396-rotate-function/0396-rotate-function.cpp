class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        long long current=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            current+=1LL*i*nums[i];
        }
        long long maxvalue=current;
        for(int i=n-1;i>0;i--){
            current=current+sum-1LL*n*nums[i];
            maxvalue=max(maxvalue,current);
        }
        return (int)maxvalue;
    }
};