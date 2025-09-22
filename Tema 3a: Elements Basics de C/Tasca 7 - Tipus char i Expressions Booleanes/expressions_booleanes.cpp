#include <iostream>

using namespace std;

int main() {
    int x;
    const int nombre = 10;

    cout << "Introdueix un nombre enter: ";
    cin >> x;
    cout << "El resultat de la comparacio es: " << ( x <= 10) << endl;

    return 0;
}