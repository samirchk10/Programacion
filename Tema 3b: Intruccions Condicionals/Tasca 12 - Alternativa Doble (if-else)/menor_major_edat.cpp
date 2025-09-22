#include <iostream>

using namespace std;

int main() {
    int any_naixement, edat;
    const int any_actual = 2025;

    cout << "Introdueix el teu any de naixement: ";
    cin >> any_naixement;

    edat = any_actual - any_naixement;

    cout << "Tens " << edat << " anys";

    if (edat >= 18)
        cout << " i ets major d'edat." << endl;
    else
        cout << " i ets menor d'edat." << endl;

    return 0;
}