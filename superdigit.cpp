//superdigit where we keep summing the digits of a number until we get a single digit
#include <bits/stdc++.h>
using namespace std;
int f(int n){
    if(n<10)return n;
    else {int s=0;
        while(n>0){
         s+=n%10;
         n/=10;
        }return f(s);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<f(n);
}