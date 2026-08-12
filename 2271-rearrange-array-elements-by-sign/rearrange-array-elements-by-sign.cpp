class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n= nums.size();
        vector<int> positivele;
        vector<int> negativeele;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                positivele.push_back(nums[i]);
            }else{
                negativeele.push_back(nums[i]);
            }
        }
        nums.clear();
        for(int i=0;i<n/2;i++){
            nums.push_back(positivele.at(i));
            nums.push_back(negativeele.at(i));
        }
        return nums;
    }
};