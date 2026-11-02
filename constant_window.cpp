#include<iostream>
#include<vector>
using namespace std;

int ConstWindow(vector<int>nums, int k) {
    int n = nums.size();
    int l = 0, r = k-1;

    int sum=0;  
    for(int i=0; i<k; i++) {
        sum += nums[i];
    }
    
    int maxSum =sum;

    while(r < n-1) {
        sum = sum - nums[l];
        l++;
        r++;
        sum = sum + nums[r];
        maxSum = max(maxSum, sum);
    }
    return maxSum;
};

int main() {
    vector<int>nums = {-1,2,3,4,6,3,4};
    int k = 4;
    cout<<ConstWindow(nums,k);
    return 0;
}