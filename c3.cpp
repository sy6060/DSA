#include <iostream>
using namespace std;
class Number{
public:
int n;
void compare(Number ob1,Number ob2){
    cout<<"max is "<<max(ob1.n,ob2.n)<<endl;
}
};
int main(){
    Number ob1,ob2;
    ob1.n=456;
    ob2.n=865;
    ob2.compare(ob1,ob2);
    return 0;
}