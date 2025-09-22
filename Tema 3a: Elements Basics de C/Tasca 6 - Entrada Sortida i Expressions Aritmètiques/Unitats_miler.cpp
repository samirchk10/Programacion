#include <iostream>

using namespace std;

int main() {
    int nombre;
    int unitats_miler;

    cout << "Introdueix un nombre enter: ";
    cin >> nombre;

    unitats_miler = (nombre / 1000) % 10;

    cout << "Les unitats de miler del nombre " << nombre << " son " << unitats_miler << endl;

    return 0;
}