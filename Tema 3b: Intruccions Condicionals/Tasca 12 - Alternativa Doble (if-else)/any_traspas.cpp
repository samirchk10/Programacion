#include <iostream>

using namespace std;

int main() {
    int any;

    cout << "Introdueix un any: ";
    cin >> any;

    cout << "A l'any " << any << " febrer te ";

    if ((any % 4 == 0 && any % 100 != 0) || any % 400 == 0)
        cout << "29 dies" << endl;
    else
        cout << "28 dies" << endl;
    
    return 0;
}