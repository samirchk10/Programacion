#include <iostream>

using namespace std;

int main() {
    int nombre;

    cout << "Introdueix un nombre enter (entre 0 i 200): ";
    cin >> nombre;

    cout << (char)nombre << " " << (char)(nombre + 1) << " " << (char)(nombre + 10) << endl;

    return 0;
}