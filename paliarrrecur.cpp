//pali arr using recur
#include <bits/stdc++.h>
using namespace std;
  
  bool ispali(vector<char> a,int l,int r){
      if(l==r)return true;
      if(a[l]==a[r])return ispali(a,++l,--r);
      if(a[l]!=a[r])return false;
  }
int main() {
    int n;cin>>n;
    vector<char> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
cout<<ispali(a,0,n-1);
return 0;
}
