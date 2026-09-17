class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count=0;
        int n=people.size();
        int left=0;
        int right=people.size()-1;
        sort(people.begin(),people.end());
        while(left<=right){
            int sum=people[left]+people[right];
            if(sum<=limit){
                left++;
                right--;
            }
            else{
                
                right--;
            }
            count++;
        }
        return count;
    }
};