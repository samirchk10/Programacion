#include <iostream>

using namespace std;

int main() {
    int any_naixement;
    int any_actual = 2025;
    int edat;

    cout << "Introdueix el teu any de naixement: ";
    cin >> any_naixement;

    edat = any_actual - any_naixement;
    cout << "Tens " << edat << " anys" << endl;

    return 0;
}