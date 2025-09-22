#include <iostream>

using namespace std;

int main() {
    char vocal;

    cout << "Introdueix una vocal: ";
    cin >> vocal;

    switch(vocal) {
        case 'a':
        case 'A':
            cout << "Vocal: " << vocal << " - Codi Morse: .-" << endl;
            break;
        case 'e':
        case 'E':
            cout << "Vocal: " << vocal << " - Codi Morse: ." << endl;
            break;
        case 'i':
        case 'I':
            cout << "Vocal: " << vocal << " - Codi Morse: .." << endl;
            break;
        case 'o':
        case 'O':
            cout << "Vocal: " << vocal << " - Codi Morse: ---" << endl;
            break;
        case 'u':
        case 'U':
            cout << "Vocal: " << vocal << " - Codi Morse: ..-" << endl;
            break;

        default:
            cout << "Error: El caracter introduit no es una vocal";
    }

    return 0;
}