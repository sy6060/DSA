#include <iostream>
using namespace std;
int f(int n,int r){
    if(n<=0)return r;
    else return f(n/10,r*10+n%10);
}
int main(){
    int r=0;
  cout<<  f(436,r);
    
    return 0;
}