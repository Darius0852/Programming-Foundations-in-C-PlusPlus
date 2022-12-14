//  Simple Authentication Example
#include <iostream>

using namespace std;

int main () {

    string username;
    string password;

    cout << "Username: ";
    cin >> username;
    if(username == "Darius") {
        cout << "\n";
        cout << "Password: ";
        cin >> password;
        if (password == "1234") {
            cout << "Access Granted\n";
        } else {
            cout << "Password Invalid. Try Again\n";
            main();
        }
    } else {
        cout << "Username not found. Try Again\n";
        main();
    }


}