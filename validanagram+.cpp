#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>s1 (26,0);
        vector<int>t1(26,0);
        if(s.size()!=t.size())
        return false;
        else{
          
         for(int i=0;i<s.size();i++)
         {
            s1[s[i]-'a']++;

         }
         for(int i=0;i<t.size();i++)
         {
            t1[t[i]-'a']++;

         }
          for(int i=0;i<26;i++)
         {
            if(t1[i] !=s1[i])
            return false;

         }
         
        }
        return true;
    }
};
int main(){
    Solution s;
    string str1 = "anagram";
    string str2 = "nagaram";
    if(s.isAnagram(str1,str2)){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }
    return 0;
}