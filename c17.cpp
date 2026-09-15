//create a class student having 3 priv marks use a friend func tion to calculate and display the avg
#include <iostream>
using namespace std;
class Student {
    private:
    int m1,m2,m3;
    public:
    void input(int a,int b,int c){
        m1=a,m2=b,m3=c;
    }
    friend void avg(Student);
};
void avg(Student k){
    cout<<"average marks is " <<(k.m1+k.m2+k.m3)/3<<endl;
}
int main(){
    Student s;
    s.input(67,57,99);
    avg(s);
    return 0;
}