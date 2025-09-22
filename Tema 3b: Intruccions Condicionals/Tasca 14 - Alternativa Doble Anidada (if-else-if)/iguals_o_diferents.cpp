#include <iostream>

using namespace std;

int main() {
    float a, b, c;

    cout << "Introdueix tres nombres: ";
    cin >> a >> b >> c;

    if (a + b == c || b + c == a || c + a == b)
        cout << "IGUALS" << endl;
    else
        cout << "DIFERENTS" << endl;

    return 0;
}