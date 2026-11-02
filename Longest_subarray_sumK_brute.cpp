#include<iostream>
#include<vector>
using namespace std;

int MaxSubarray(vector<int>nums, int k) {
    int maxLen = 0;
    int n = nums.size();
    for(int i=0; i<n; i++) {
        int sum = 0;
        for(int j=i; j<n; j++) {
            sum = sum + nums[j];

            if(sum <= k) {
                maxLen = max(maxLen, j-i+1);
            } else{
                break;
            }
        }
    }
    return maxLen;
};

int main() {
    vector<int> nums = {2, 5, 1, 7, 10};
    int k = 14;
    cout<<MaxSubarray(nums, k);
}