#include <iostream>

using namespace std;

int main() {
    int nombre;
    const int x = 0;
    const int y = 10;

    cout << "Introdueix un numero enter: ";
    cin >> nombre;

    cout << "El resultat de la comparacio es: " << ( nombre > 0 && nombre < 10) << endl;

    return 0;
}