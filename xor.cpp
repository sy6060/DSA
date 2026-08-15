#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
   int longestSubsequence(vector<int>& nums) {

    int totalXor = 0;  //because XOR 0 doesn't flip value
    for (int x : nums) totalXor ^= x;

    if (totalXor != 0) {
        // Whole array works
        return nums.size();
    } else {
        // If all elements are 0, no non-zero subsequence exists
        bool allZero = true;
        for (int x : nums) {
            if (x != 0) { allZero = false; break; }
        }
        return allZero ? 0 : nums.size() - 1;//drop one number to break cancellation
    }
}

};
int main(){
    
    Solution sol;
    int n;cin>>n;
    vector<int> nums;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        nums.push_back(x);
    }
    cout << sol.longestSubsequence(nums) << endl;

    return 0;
}