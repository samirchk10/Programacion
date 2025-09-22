#include <iostream>

using namespace std;

int main() {
    float dolars;
    const float conv_dolar_euro = 0.892439;
    float euros;

    cout << "Introdueix la quantita a convertir de dolars a euros: ";
    cin >> dolars;

    euros = dolars * conv_dolar_euro;

    cout << dolars << " dolars son " << euros << " euros" << endl;

    return 0;
}