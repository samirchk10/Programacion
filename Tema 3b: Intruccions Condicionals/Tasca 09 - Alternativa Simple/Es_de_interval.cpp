#include <iostream>

using namespace std;

int main() {
    int nombre;

    cout << "Introdueix un nombre enter: ";
    cin >> nombre;

    cout << "El nombre " << nombre << " ";
    if (nombre < 0 || nombre > 10) {
        cout << "NO ";
    }
    cout << "esta en l'interval" << endl;
}