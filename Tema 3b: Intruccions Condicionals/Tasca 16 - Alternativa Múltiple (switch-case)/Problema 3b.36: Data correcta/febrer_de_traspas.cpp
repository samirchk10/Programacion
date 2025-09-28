#include <iostream>

using namespace std;

int main() {
    int any, resultat;

    cout << "Introdueix un any: ";
    cin >> any;

    resultat = (any % 4 == 0 && any % 100 != 0 || any % 400 == 0) ? 29 : 28;
    
    cout << "Febrer té " << resultat << " dies" << endl;

    return 0;
}