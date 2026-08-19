#include <bits/stdc++.h>
using namespace std;
  
  bool isth(vector<int> &a,int l,int r,int k){
     if(l>r)return false;
     int m=(l+r)/2;
     if(a[m]==k)return true;
     if(a[m]>k)return isth(a,l,m-1,k);
     return isth(a,m+1,r,k);
  }
int main() {
    cout<<"Enter the size of the array: ";
    int n;cin>>n;
    cout<<"Enter the elements of the array: ";
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
cout<<isth(a,0,n-1,6);
return 0;
}
