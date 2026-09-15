//class reactangle priv l and b uaff to calcul ate area
#include <iostream>
using namespace std;
class Rectangle{

    private: int a,b;
    public: 
    void input(int x,int y){
        a=x,b=y;
    }
    friend int area(Rectangle);
};
int area(Rectangle p){
    return p.a*p.b;
}
int main(){
    Rectangle n;
    n.input(5,9);
    int s=area(n);
    cout<<s<<endl;
    return 0;
}