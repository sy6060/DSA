#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++)cin>>a[i];
  stack<int> x;stack<int> y;
  for(int i=0;i<n/2;i++){
      x.push(a[i]);
  } for(int i=n/2;i<n;i++){
      y.push(a[i]);
  } cout<<"STACK 1: ";while(!x.empty()){cout<<x.top()<<" ";x.pop();}
  cout<<"STACK 2: ";
  while(!y.empty()){cout<<y.top()<<" ";y.pop();}
return 0;

}
