#include <iostream>

using namespace std;

int main() {
    float euros, conversio;
    int opcio;

    #define USD 1.34
    #define GBP 0.83
    #define CHF 1.23
    #define JPY 133.11

    cout << "Introdueix una quantitat en euros: ";
    cin >> euros;

    cout << endl << "====== MENU ======" << endl;
    cout << "1 - Dolars (USD)" << endl << "2 - Llliures (GBP)" << endl << "3 - Francs suïssos(CHF)" << endl << "4 - Yens(JPY) " << endl;
    cout << "==================" << endl;

    cout << endl << "Escolleix una opcio: ";
    cin >> opcio;

    switch(opcio){
        case 1:
            conversio = euros * USD;
            cout << endl << euros << " euros son " << conversio << " USD." << endl;
            break;
        case 2:
            conversio = euros * GBP;
            cout << endl << euros << " euros son " << conversio << " GBP." << endl;
            break;
        case 3: 
            conversio = euros * CHF;
            cout << endl << euros << " euros son " << conversio << " CHF." << endl;
            break;
        case 4:
            conversio = euros * JPY;
            cout << endl << euros << " euros son " << conversio << " JPY." << endl;
            break;
        default:
            cout << "Error: moneda no disponible";
    }

    return 0;
} 
