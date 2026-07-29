#include <bits/stdc++.h>
using namespace std;

int main() {int k;cin>>k;
stack<int> t;
int m=INT_MAX;int n=INT_MIN;
while(k>0){int x;
 cin>>x;
 t.push(x);k--;
}while(!t.empty()){
    if(t.top()<m)m=t.top();
    else if(t.top()>n)n=t.top();
    t.pop();
}cout<<m<<" "<<n<<endl;
return 0;

}
