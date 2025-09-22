#include <iostream>

using namespace std;

int main() {
    float celsius;
    float fahrenheit;

    cout << "Introdueix els graus Celsius que vols convertir a Fahrenheit: ";
    cin >> celsius;

    fahrenheit = 9.0/5.0 * celsius + 32;

    cout << celsius << " graus Celsius son " << fahrenheit << " graus Fahrenheit" << endl;

    return 0;
}