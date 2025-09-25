#include <iostream>

using namespace std;

int main() {
    int any;

    cout << "Introdueix un any: ";
    cin >> any;

    if (any % 4 == 0 && any % 100 != 0 || any % 400 == 0)
        cout << "Febrer té 29 dies" << endl;
    else
        cout << "Febrer té 28 dies" << endl;
    
    return 0;
}