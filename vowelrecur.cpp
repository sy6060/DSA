#include <bits/stdc++.h>
using namespace std;

int f(string s,int n,int i){
    if(i==s.length())return n;
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')++n;
   return f(s,n,++i);
}
int main() {
   string s="hellopy";
   int n=0;
   cout<<f(s,n,0);
   return 0;

}
