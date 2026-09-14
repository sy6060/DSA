//ff w 2 classes
#include <iostream>
using namespace std;
class B;
class A{
private: double bal;
public:string n;
void input(double bal,string n){
    this->bal=bal;
    this->n=n;
}
friend void cmpare(A ,B);
};
class B{
private: double bal;
public:string n;
void input(double bal,string n){
    this->bal=bal;
    this->n=n;
}
friend void cmpare(A ,B);
};
void cmpare(A a,B b){
if(a.bal>b.bal){
    cout<<"bank "<<a.n<<" has higher balance";
    cout<<"\n balance: "<<a.bal;
}
else if(a.bal<b.bal){
    cout<<"bank "<<b.n<<" has higher balance";
    cout<<"\n balance: "<<b.bal;
}
else{
    cout<<"both have equal balance";
    cout<<"\n balance: "<<a.bal;
    }
}
int main(){
    A a;B b;
    a.input(75000.0,"BOI");
    b.input(120000.0,"SBI");
    cmpare(a,b);
    return 0;
}