#include <iostream>

using namespace std;

int main() {
    int opcio;

    cout << "    Menu    " << endl << endl << "1 - Opcio 1" << endl << "2 - Opcio 2" << endl << "3 - Opcio 3" << endl;
    cout << "Prem una tecla per seleccionar opcio: ";
    cin >> opcio;

    switch(opcio) {
        case 1:
            cout << "Fent tasca " << opcio << endl;
            break;
        case 2:
            cout << "Fent tasca " << opcio << endl;
            break;
        case 3:
            cout << "Fent tasca " << opcio << endl;
            break;
        default:
            cout << "Opcio incorrecta";
    }

    return 0;
}