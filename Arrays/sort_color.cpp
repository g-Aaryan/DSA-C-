#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
    //brute force sort the array O(nlogn) time complexity and O(1) space complexity
        sort(nums.begin(), nums.end());
    }
    void sortColors2(vector<int>& nums) {
    //better solution
    int count1=0;
    int count2=0;
    int count3=0;
    int n=nums.size();

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count1++;
        }
        else if(arr[i]==1){
            count2++;
        }
        else if(arr[i]==2){
            count3++;
        }
    }

    for(int i=0;i<n;i++){
        if(i<count1){
            arr[i]=0;
        }
        else if(i<count1+count2){
            arr[i]=1;
        }
        else{
            arr[i]=2;
        }
    }
    }
    // time complexity O(n) and space complexity O(1) but more optimized solution is dutch national flag algorithm

    vector<int> sortColors3(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size() - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    Solution obj;
    obj.sortColors(nums);

    cout << "Sorted Array: ";
    for (int x : nums) {
        cout << x << " ";
    }
    return 0;
}