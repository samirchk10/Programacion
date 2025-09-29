#include <iostream>

using namespace std;

int main(){
    int opcio;
    float resultat, n1, n2;

    cout << "======= MENÚ =======" << endl;
    cout << "1. - Suma" << endl << "2. - Resta" << endl << "3. - Producte" << endl << "4. - Divisió" << endl << "5. - Sortir" << endl;
    cout << "====================" << endl; 

    cout << "Selecciona una de les opcions: " << endl;
    cin >> opcio;

    switch (opcio)
    {
    case 1:
        cout << "Introdueix dos valors: ";
        cin >> n1 >> n2;
        resultat = n1 + n2;

        cout << n1 << " + " << n2 << " = " << resultat << endl;
        break;
    case 2:
        cout << "Introdueix dos valors: ";
        cin >> n1 >> n2;
        resultat = n1 - n2;

        cout << n1 << " - " << n2 << " = " << resultat << endl;
        break;
    case 3:
        cout << "Introdueix dos valors: ";
        cin >> n1 >> n2;
        resultat = n1 * n2;

        cout << n1 << " x " << n2 << " = " << resultat << endl;
        break;
    case 4:
        cout << "Introdueix dos valors: ";
        cin >> n1 >> n2;
        if (n2 != 0){
            resultat = n1 / n2;
            cout << n1 << " : " << n2 << " = " << resultat << endl;
        }
        else{
            cout << "Error: Divisio per zero" << endl;
        }

        break;
    case 5:
        cout << "Sortint de la calculadora..." << endl;
        break;
    
    default:
        cout << "Error: Opcio no valida" << endl;
        break;
    }

}