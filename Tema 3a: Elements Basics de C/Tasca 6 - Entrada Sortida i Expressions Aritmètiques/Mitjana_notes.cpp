#include <iostream>

using namespace std;

int main() {
    float N1, N2, N3;
    float mitjana;

    cout << "Introdueix les tres notes de l'alumne (separades per espais):";
    cin >> N1 >> N2 >> N3;

    mitjana = (N1 + N2 + N3) / 3;
    cout << "La mitjana de les tres notes " << N1 << ", " << N2 << " i " << N3 << " es " << mitjana << endl;

    return 0;
}