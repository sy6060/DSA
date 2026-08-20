#include <bits/stdc++.h>
using namespace std;

int f(string s,int n){
    if(n==s.length())return n;
   return f(s,++n);
}
int main() {
   string s="hellopy";
   int n=0;
   cout<<f(s,n);
   return 0;

}
