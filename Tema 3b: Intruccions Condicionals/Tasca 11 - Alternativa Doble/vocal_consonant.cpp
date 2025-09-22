#include <iostream>

using namespace std;

int main() {
    char caracter;

    cout << "Introdueix un caracter: ";
    cin >> caracter;

    if ((caracter == 'A') || (caracter == 'E') || (caracter == 'I') || (caracter == 'O') || (caracter == 'U') || 
    (caracter == 'a') || (caracter == 'e') || (caracter == 'i') || (caracter == 'o') || (caracter == 'u'))

        cout << "Vocal" << endl;
    else
        cout << "Consonant" << endl;

    return 0;
}