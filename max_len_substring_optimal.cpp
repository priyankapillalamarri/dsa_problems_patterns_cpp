#include<iostream>
#include<vector>
using namespace std;

int MaxLenSubstring(string s) {
    int n = s.length();
    int l = 0, r = 0, maxLen = 0;

    int hash[256];
    fill(hash, hash+256, -1);

    while(r < n) {
        if(hash[s[r]] != -1) {
            if(hash[s[r]] >= l) {
                l = hash[s[r]] + 1;
            }
        }
        int len = r-l+1;
        maxLen = max(maxLen, len);
        hash[s[r]] = r;
        r++;
    }
    return maxLen;
};

int main() {
    string s = "abcdzeabbcde";
    cout<<MaxLenSubstring(s)<<endl;
    return 0;
}