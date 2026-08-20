//1.Create an Employee class that hides salary and provides a function to increase salary by a given percentage. 
#include <iostream>
using namespace std;
class Employee{
    private:    
    double salary;
public:
string name;
    Employee(string name, double salary) : name(name), salary(salary) {}
    
    void increaseSalary(double percentage) {
        salary += salary * (percentage / 100);
    }
    
    void display() const {
        cout << "Name: " << name << ", Salary: " << salary << endl;
    }
};
int main(){
    Employee emp("paavni", 50000.0);
    emp.display();
    
    emp.increaseSalary(10.0); // Increase salary by 10%
    emp.display();
    
    return 0;
}