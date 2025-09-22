#include <iostream>

using namespace std;

int main() {
    int any_naixement;
    int edat;

    cout << "Introdueix el teu any de naixement: ";
    cin >> any_naixement;

    edat = 2025 - any_naixement;
    cout << "Tens " << edat << " anys" << endl;

    if (edat >= 16 && edat < 67)
        cout << "Estas en edat de treballar" << endl;
    
    return 0;
}