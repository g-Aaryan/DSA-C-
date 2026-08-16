class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;
        int n=nums.size();
        int tofind;

        for(int i=0;i<n;i++){
            tofind = target-nums[i];
            if(mpp.find(tofind)!=mpp.end()){
                return {mpp[tofind],i};
            }
            mpp[nums[i]]=i;
        }
        return {-1,-1};
    }
};