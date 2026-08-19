//max length of a substring where each char has atmost 2 occurence and not more than 2
//uses sliding window
//tc is O(n)


#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
     int maximumLengthSubstring(string s) {int n=s.length();
 int l=0;int maxlen=0;vector<int> f(256,0);
 for(int r=0;r<n;r++){
     f[s[r]]++;
     while(f[s[r]]>2){
        f[s[l]]--;
        l++;
     }maxlen=max(maxlen,r-l+1);
 }return maxlen;
    }
};
int main(){
    Solution sol;
    cout<<sol.maximumLengthSubstring("bcbbbcba");
    return 0;
}