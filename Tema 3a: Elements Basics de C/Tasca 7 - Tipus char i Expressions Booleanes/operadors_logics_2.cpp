#include <iostream>

using namespace std;

#define Xmin 0
#define Ymin 0
#define Xmax 10
#define Ymax 10

int main() {
    int x, y;
    
    cout << "Introdueix dos valors (separat per un espai): ";
    cin >> x >> y;

    cout << "El resultat es: " << (( x >= Xmin && x <= Xmax) && (y >= Ymin && y <= Ymax)) << endl;

    return 0;
}