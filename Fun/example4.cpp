// Auth

#include <iostream>

using namespace std;

string username;
string password;

void authorize(string username) {
    
    if(username == "Darius") {
        cout << "Password: ";
        cin >> password;
    } else {
        cout << "Wrong Password";
        
    }
    
};

int main () {
    
    cout << "Username: ";
    cin >> username;
    authorize(username);
        
}

