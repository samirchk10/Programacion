#include <iostream>

using namespace std;

int main() {
    int mes;

    cout << "Introdueix el numero d'un mes: ";
    cin >> mes;

    switch(mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
            cout << 31 << endl;
            break;
        case 4: case 6: case 9: case 11:
            cout << 30 << endl;
            break;
        case 2:
            cout << 28 << endl;
            break;
        default:
            cout << "Error: Mes incorrecte" << endl;
    }

    return 0;
}