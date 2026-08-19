 #include <bits/stdc++.h>
using namespace std;
 class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char,int> f;
       for ( char c : s ){
         f[c]++;
       } 
       unordered_map<char,int> fr;
       for ( char c : t){
        fr[c]++;
       }
       if(f==fr)return true;
       return false;
       
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