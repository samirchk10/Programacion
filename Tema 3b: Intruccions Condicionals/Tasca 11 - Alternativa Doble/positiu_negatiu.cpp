#include <iostream>

using namespace std;

int main() {
    int nombre;

    cout << "Introdueix un nombre enter: ";
    cin >> nombre;

    if (nombre >= 0) {
        cout << "Positiu" << endl;
    }
    else {
        cout << "Negatiu" << endl;
    }

    return 0;
}