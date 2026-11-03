//Max cards can obtain from cards by consecutive from
//starting or ending and maximum sum from picked cards

#include<iostream>
#include<vector>
using namespace std;

int MaxCards(vector<int>nums, int k) {
    int lsum = 0, rsum = 0, maxSum = 0;
    int n = nums.size();

    for(int i=0; i<k; i++) {
        lsum = lsum + nums[i];
    }

    maxSum = lsum;
    int rindex = n-1;

    for(int j=k-1; j>=0; j--) {
        lsum = lsum - nums[j];
        rsum = rsum + nums[rindex];
        rindex = rindex-1;

    maxSum = max(maxSum, lsum+rsum);       
    }
    return maxSum;
}

int main() {
    vector<int>nums = {6, 2, 3, 4, 7, 2, 1, 7, 1};
    int k = 3;
    cout<<MaxCards(nums, k);
    return 0;
}