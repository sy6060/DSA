#include <bits/stdc++.h>
using namespace std;

class Employee {
private:
    int id;
    string name;
    int attendanceDays;   // per employee counter
public:
    Employee(string name, int id) {
        this->name = name;
        this->id = id;
        attendanceDays = 0;
    }

    // Every time this is called, attendance increases
    void markPresent() {
        attendanceDays++;
    }

    void showAttendance() {
        cout << "Name: " << name << "\nID: " << id << endl;
        cout << "Days Present: " << attendanceDays << endl;
    }
};

int main() {
    Employee e1("nemo", 3452);
    Employee e2("dory", 5678);
    Employee e3("naver", 8964);

    // simulate attendance
    e1.markPresent();  
    e1.markPresent();  
    e2.markPresent();  
    e3.markPresent();  
    e3.markPresent();  
    e3.markPresent();  

    e1.showAttendance();
    e2.showAttendance();
    e3.showAttendance();

    return 0;
}
