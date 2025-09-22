#include <iostream>

using namespace std;

int main() {
    int x, y, z;

    cout << "Introdueix 3 nombres enters (separats per un espai): ";
    cin >> x >> y >> z;

    bool expressio_1 = (x < 7) && ((y > z) || (7 > z));
    bool expressio_2 = ((x == 'c') && (y < -5)) && ((z >= 100) || (z < 6));
    bool expressio_3 = ((9 >= x) && (13 < y)) || (-36 >= z);

    cout << "Resultat de les expressions: " << expressio_1 << " " << expressio_2 << " " << expressio_3 << endl;

}