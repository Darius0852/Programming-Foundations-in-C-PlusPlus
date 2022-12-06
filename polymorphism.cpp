#include <iostream>

using namespace std;

class Addition {
    public:
    int ADD(int X, int Y) //Function with parameter
    {
        return X + Y; //this function is performing addition of two integers
    }
    int ADD() {                 //Function with the same name but with parameter
        string a = "Hello";
        string b="Darius";      //concatenation is performed
        string c = a + b;
        cout << c<< endl;
    }
};

int main(void) {
    Addition obj;   //Object is created
    cout <<obj.ADD(128, 15)<<endl; //first methos is called
    obj.ADD(); //second methos is called
    return 0;
}