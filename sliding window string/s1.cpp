//max length of a substring where each char has atmost 2 occurence and not more than 2
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
    cout<<maximumLengthSubstring("abasdbaefbbycg");
    return 0;
}