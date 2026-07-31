#include <bits/stdc++.h>
using namespace std;
int main(){
    string s="icecream";
    //using auto for traversing string and printing 
     for(auto c:s)
     cout<<c;
     //using range based loop
     vector<int> a(3);
     for(int i=0;i<3;i++)cin>>a[i];  // range based loop is not used for inputing/entering values 
     int sum=0;
     for(int d:a)sum+=d;
    cout<<sum<<endl;
    return 0;
}