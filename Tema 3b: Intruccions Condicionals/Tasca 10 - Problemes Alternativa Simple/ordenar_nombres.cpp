#include <iostream>

using namespace std;

int main() {
    int num1, num2, num1_bak;

    cout << "Introdueix dos nombres enters (separats per un espai): ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        num1_bak = num1;
        num1 = num2;
        num2 = num1_bak;
    }

    cout << "El valor de num1 es " << num1 << " i el valor de num2 es " << num2 << endl;

    return 0;
}