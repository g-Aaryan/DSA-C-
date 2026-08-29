class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int high=0;
        int low=0;
        int sum=0;
        int min_length=INT_MAX;
        while(high<n){
            sum=sum+nums[high];
            while(sum>=target){
                int len=high-low+1;
                min_length=min(min_length,len);
                sum=sum-nums[low];
                low++;
            }
            high++;
        }
        if(min_length==INT_MAX){
            return 0;
        }
        return min_length;
    }
};