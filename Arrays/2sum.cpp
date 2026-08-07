#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
// brute force will be O(n^2) time complexity and O(1) space complexity
    vector<int> twosum(vector<int>& arr, int target) {
        int n = arr.size();
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(arr[i] + arr[j] == target) {
                    return {i, j};
                }
            }
        }
        return {-1, -1};
    }

    //better solution time complexity O(nlogn) and space complexity O(n)
    vector<int> twosum2(vector<int>& arr, int target) {
        int n = arr.size();
        unordered_map<int,int> mpp;
        int to_find=0;
        for(int i = 0; i < n; i++) {
            to_find=target-arr[i];
            if(mpp.find(to_find)!=mpp.end()){
                return {i,mpp[to_find]};
            }
            mpp[arr[i]]=i;
        }
        return {-1, -1};
    }
};

int main() {
    vector<int> arr = {1,3,5,7,2,10,34,4,23,11};
    Solution obj;
    vector<int> ans = obj.twosum(arr, 9);
    cout << ans[0] << " " << ans[1];
    return 0;
}