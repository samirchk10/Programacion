#include <iostream>

using namespace std;

int main() {
    char nom;
    char cognom;
    int edat;

    cout << "Introdueix la inicial del teu nom, la del teu cognom i la teva edat (separat per un espai): ";
    cin >> nom >> cognom >> edat;

    cout << "Hola " << nom << "." << cognom << ". Tens " << edat << " anys!" << endl;

    return 0;
}