#include <iostream>

using namespace std;

int main() {
    float teoria, seminaris, practiques, nota_final;

    cout << "Introdueix les notes de teoria, seminaris i practiques: ";
    cin >> teoria >> seminaris >> practiques;

    nota_final = 0.4 * teoria + 0.3 * seminaris + 0.3 * practiques;

    cout << "La nota final es " << nota_final << " - ";

    if (nota_final < 5){
        cout << "SUSPES" << endl;
    }
    else {
        if (nota_final < 7){
            cout << "APROVAT" << endl;
        }
        else {
            if (nota_final < 9){
                cout << "NOTABLE" << endl;
            }
            else {
                if (nota_final < 10){
                    cout << "EXCEL.LENT" << endl;
                }
                else {
                    cout << "MATRICULA D'HONOR" << endl;
                }
            }
        }
    }

    return 0;
}