#include <bits/stdc++.h>
using namespace std;

int m(int a,int b=3){   // 2 para
return a*b;
}
int m(int p,int q,int r){   //3 para
return p*q*r;
}
void m(double a,double b){   //2 para
    cout<<a*b<<endl;
}
 int main(){
cout<<m(4,)<<endl; //1 arg
cout<<m(3,7,2)<<endl;  // 3 arg
m(4.0,8.0);  // 2 arg
return 0;
 }