#include <bits/stdc++.h>
using namespace std;
class emp{
public:
string n,id;
vector<int> m=vector<int>(5);
void input(){
    cout<<"enter name\n"; cin>>n;
    cout<<"enter id\n"; cin>>id;
    cout<<"enter marks of 5 performance parameters\n"; 
    for(int i=0;i<5;i++)cin>>m[i];
}
int t;
double avg;
void calc(){t=0;
    for(int i=0;i<5;i++){
    t+=m[i];}
    avg=(double)t/5;
}
emp cmpare(emp e){
    if(e.avg>avg)
    return e;
    else return *this;
}
void display(){
    cout<<"name: "<<n<<"\nid: "<<id<<"\n";
}
};
int main(){
emp e1,e2;
e1.input();
e2.input();
e1.calc();
e2.calc();
e2=e2.cmpare(e1);
cout<<"student with higher marks\n";
e2.display();
return 0;
}