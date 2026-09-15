//create class point containing private coordinates x and y use a friend fucntion to calculate
//the distance bw 2 point
#include <iostream>
#include <cmath>
using namespace std;
class point{
    private: int x,y;
    public:
    void input(){
        cout<<"enter the coordinates of point"<<endl;
        cin>>x>>y;
    }
    friend void distance(point,point);
};
void distance(point p,point q){
    cout<<"the distance between the points is : "<<sqrt(pow(p.x-q.x,2)+pow(p.y-q.y,2))<<endl;
}
int main(){
    point p1,p2;
    p1.input();
    p2.input();
    distance(p1,p2);
    return 0;
}