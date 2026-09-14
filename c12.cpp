//friend function w 2 classes
#include <iostream>
using namespace std;
class student2;
class student1{
private:int m;string n;
public:void input(int m,string n){
    this->m=m;
    this->n=n;
}friend void higher(student1 ,student2 );
};
class student2{
private:int m;string n;
public:void input(int m,string n){
    this->m=m;
    this->n=n;
}friend void higher(student1 ,student2 );
};
void higher(student1 s1,student2 s2){
   if(s1.m>s2.m){
    cout<<s1.n<<" has higher marks";
   }
   else if(s1.m<s2.m){
    cout<<s2.n<<" has higher marks";
   }
   else
    cout<<"both have equal marks";
}
int main(){
    student1 s1;
    student2 s2;
    s1.input(59,"Neha");
    s2.input(89,"Saumya");
    higher(s1,s2);
    return 0;
}