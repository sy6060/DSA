/*create a class student containing rollno, name, and marks. create a func that accepts another student obj and returns the
student obj w higher marks
*/
#include <iostream>
using namespace std;
class student{
public:
string n;
long r;
int m;
void input(string s,long p,int k){
    n=s,r=p,m=k;
}
student asd(student a){
    if(a.m>m)return a;
    else return *this;
}
};
int main(){
    student ob1,ob2;
    ob1.input("arya",123456,89);
    ob2.input("pihu",567890,95);
    ob2=ob2.asd(ob1);
    cout<<"name: "<<ob2.n<<"\nrollno: "<<ob2.r<<"\nmarks: "<<ob2.m;
    return 0;
}