#include <iostream>

using namespace std;

int main() {
    int any_naixement, modul;

    cout << "Introdueix el teu any de naixement: ";
    cin >> any_naixement;

    modul = any_naixement % 12;

    cout << "Signe: ";

    switch(modul) {
        case 0:
            cout << "mono" << endl;
            break;
        case 1:
            cout << "gall" << endl;
            break;
        case 2:
            cout << "gos" << endl;
            break;
        case 3:
            cout << "porc" << endl;
            break;
        case 4:
            cout << "rata" << endl;
            break;
        case 5:
            cout << "bou" << endl;
            break;
        case 6:
            cout << "tigre" << endl;
            break;
        case 7:
            cout << "conill" << endl;
            break;
        case 8:
            cout << "drac" << endl;
            break;
        case 9:
            cout << "serp" << endl;
            break;
        case 10:
            cout << "cavall" << endl;
            break;
        case 11:
            cout << "cabra" << endl;
            break;
    }

    return 0;
}