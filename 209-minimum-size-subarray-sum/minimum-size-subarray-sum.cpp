class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0;
        int high=0;
        int leng=0;
        int res=INT_MAX;

        int n = nums.size();

        int sum = 0;
        while(high<n){
            sum=sum+nums[high];
            while(sum>=target){
                leng=high-low+1;
                res=min(leng,res);
                low++;
                sum=sum-nums[low-1];
            }
            high++;
        }
        if(res>nums.size()){
            return 0;
        }
        return res;
    }
};