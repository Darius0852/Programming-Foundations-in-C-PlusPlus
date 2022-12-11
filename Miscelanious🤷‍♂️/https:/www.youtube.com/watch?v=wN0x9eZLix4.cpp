// Classes
#include <iostream>

using namespace std;

class Employee {
    public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself() {
        cout << "Name " << Name << endl;
        cout << "Company " << Company << endl;
        cout << "Age " << Age << endl;
    }

};
int main() {
    Employee employee1;
    employee1.Name = "Darius";
    employee1.Company = "YT-SoftwareRockstar";
    employee1.Age = 28;
    employee1.IntroduceYourself();
}