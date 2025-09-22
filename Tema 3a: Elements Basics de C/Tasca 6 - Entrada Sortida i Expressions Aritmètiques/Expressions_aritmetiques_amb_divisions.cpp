#include <iostream>

using namespace std;

int main() {
    int x;
    
    cout << "Introdueix un numero enter: ";
    cin >> x;

    // Amb valors que anulen el navegador, el resultat surt com a infinit
    double operacio1 = 2.0 / (x - 4);
    double operacio2 = (1 + 4 - x) / (3.0 * (x + 3));

    cout << "Resultat: " << operacio1 << endl;
    cout << "Resultat: " << operacio2 << endl;

    return 0;
}