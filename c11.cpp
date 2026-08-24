//3 private numbers uaff to fnd largest number
#include <iostream>
using namespace std;
class Numbers{
private:int x,y,z;
public: void input(int a,int b,int c){
    x=a,y=b,z=c;
} 
friend void largest(Numbers);
};
void largest(Numbers n){
    cout<<"largest is " <<max(n.x,max(n.y,n.z));
}
int main(){
     Numbers n;
    n.input(5,9,16);
    largest(n);
    return 0;
}
