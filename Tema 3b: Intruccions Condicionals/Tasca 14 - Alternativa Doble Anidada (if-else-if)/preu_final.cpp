#include <iostream>

using namespace std;

int main() {
    int unitats_venudes;
    float preu_unitat, subtotal, iva, total, descompte;

    cout << "Introdueix el nombre d'unitats venudes: ";
    cin >> unitats_venudes;

    cout << "Introdueix el preu per unitat: ";
    cin >> preu_unitat;

    subtotal = unitats_venudes * preu_unitat;
    iva = subtotal * 0.07;
    total = subtotal + iva;

    if (total > 1000){
        descompte = 0.1;

        total = total - (total * descompte);
    }
    else {
        if (total > 500){
            descompte = 0.05;

            total = total - (total * descompte);
        }
    }

    cout << "L'import final de la compra son " << total << " euros." << endl; 

    return 0;
}