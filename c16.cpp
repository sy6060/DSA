//create a class numbers with 2 pirvate data members use a friend function to calcu sum
#include <iostream>
using namespace std;
class Numbers{
    private: int a,b;
    public: 
    void input(int x,int y){
        a=x,b=y;
    }
    friend int sum(Numbers);
};
int sum(Numbers p){
    return p.a+p.b;
}
int main(){
    Numbers n;
    n.input(5,9);
    int s=sum(n);
    cout<<s<<endl;
    return 0;
}