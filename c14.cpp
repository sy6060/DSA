//ff w 2 classes
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class point2;
class point1{
private: int x,y;
public:
void input(int x,int y){
    this->x=x;
    this->y=y;
}
friend void cmpare(point1 ,point2);
};
class point2{
private: int x,y;
public:
void input(int x,int y){
    this->x=x;
    this->y=y;
}
friend void cmpare(point1 ,point2);
};
void cmpare(point1 a,point2 b){
cout<<fixed<<setprecision(2)<<sqrt((b.y-a.y)*(b.y-a.y)+(b.x-a.x)*(b.x-a.x));
}
int main(){
    point1 a;point2 b;
    a.input(75,10);
    b.input(45,20);
    cmpare(a,b);
    return 0;
}