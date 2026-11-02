#include<iostream>
#include<vector>
using namespace std;

int MaxSubarray(vector<int>nums, int k) {
    int maxLen = 0;
    int n = nums.size();
    int l=0, r=0, sum=0;

    while(r < n) {
        sum = sum + nums[r];
        if(sum > k) {
            sum = sum - nums[l];
            l = l+1;
        } 
        if(sum <= k) {
            maxLen = max(maxLen, r-l+1);
        }
        r = r+1;
    }
    return maxLen;
};

int main() {
    vector<int> nums = {2, 5, 1, 7, 10};
    int k = 14;
    cout<<MaxSubarray(nums, k);
}