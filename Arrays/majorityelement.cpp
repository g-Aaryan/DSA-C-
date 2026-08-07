#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int majorelement(vector<int>& nums) {
        int maxi = INT_MIN;
        int count=0;
        // brute force time complexity O(n^2) and space complexity O(1)
        for(int i=0;i<nums.size();i++){
            count=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count>nums.size()/2){
                maxi=nums[i];
            }
        }

        return maxi;
    }
    int majorelement2(vector<int>& nums) {
        int maxi = INT_MIN;
        int count=0;
        // better solution time complexity O(n) and space complexity O(n)
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]]>nums.size()/2){
                maxi=nums[i];
            }
        }

        return maxi;
    }

    int majorelement3(vector<int>& nums) {
        int count=0;
        int candidate=0;
        // optimal solution time complexity O(n) and space complexity O(1)
        for(int i=0;i<nums.size();i++){
            if(count==0){
                candidate=nums[i];
            }
            if(nums[i]==candidate){
                count++;
            }
            else{
                count--;
            }
        }

        return candidate;
    }
};

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    Solution obj;
    int ans = obj.maximumElement(nums);

    cout << "Maximum Element: " << ans << endl;

    return 0;
}