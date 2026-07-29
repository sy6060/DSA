#include <bits/stdc++.h>
using namespace std;
int main(){cout<<"enter name"<<endl;
string s;
getline(cin,s);
stack<char> t;
for(int i=s.length()-1;i>=0;i--){
    if(isalpha(s[i+1])&&s[i-1]==' '){t.push(toupper(s[i]));
    t.push('.');}
    if(i==0&&isalpha(s[i]))t.push(toupper(s[i]));
}while(!t.empty()){
    cout<<t.top();
    t.pop();
}
return 0;


}