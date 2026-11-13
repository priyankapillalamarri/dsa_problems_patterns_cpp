#include<iostream>
#include<vector>
using namespace std;

int flippingZeros(vector<int> nums, int k) {
    int n = nums.size();
    int maxLen = 0;

    for(int i=0; i<n; i++) {
        int zeros = 0;
        for(int j=i; j<n; j++) {

            if(nums[j] == 0) {
                zeros++;
            }
            if(zeros <= k) {
                int len = j-i+1;
                maxLen = max(maxLen, len);
            } else {
                break;
            }
        }
    }
    return maxLen;
}

int main() {
    vector<int> nums = {1,1,1,0,0,0,1,1,1,0};
    int k = 2;
    cout<<flippingZeros(nums,k);
    return 0;
}