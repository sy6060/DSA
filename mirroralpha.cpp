#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
       s[i]='a'+'z'-s[i];  // this changes to mirror alphabet
        
    }
    cout<<s<<endl;
return 0;
}
