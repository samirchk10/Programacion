#include <iostream>

using namespace std;

int main() {
    int any_naixement;
    int any_actual = 2025;
    int edat;

    cout << "Introdueix el teu any de naixement: ";
    cin >> any_naixement;

    edat = any_actual - any_naixement;
    cout << "Tens " << edat << " anys";

    if (edat < 18) {
        cout << " i ets menor d'edat." << endl;
        
        if (edat > 12)
            cout << "Has acabat primaria." << endl;
        else
            cout << "Encara no has acabat primaria." << endl;
    }

    else {
        cout << " i ets major d'edat." << endl;

        if (edat < 67)
            cout << "Estas en edat de treballar." << endl;
        else
            cout << "Estas en edat de jubilacio." << endl;
    }

    return 0;
}