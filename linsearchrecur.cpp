#include <bits/stdc++.h>
using namespace std;

bool f(vector<int> a,int k,int i){
    if(i==a.size())return false;
    if(a[i]==k)return true;
    if(i<a.size())return f(a,k,++i);
}
int main() {
   vector<int> a={3,6,3,7,9,1};
   cout<<f(a,9,0);
   return 0;

}
