#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    int comparacions = 0;

    cout << "Introdueix 4 nombres enters: ";
    cin >> a >> b >> c >> d;

    cout << "El numero mes gran de la serie es ";

    comparacions++;

    if (a > b) {
        comparacions++;

        if (a > c) {
            comparacions++;

            if (a > d) {
                cout << a;
            }
            else {
                cout << d;
            }
        }
        else {
            comparacions++;

            if (c > d) {
                cout << c;
            }
            else {
                cout << d;
            }
        }
    }
    else {
        comparacions++;

        if (b > c) {
            comparacions++;

            if (b > d){
                cout << b;
            }
            else {
                cout << d;
            }
        }
        else {
            comparacions++;

            if (c > d) {
                cout << c;
            }
            else {
                cout << d;
            }
        }
    }

    cout << ". Comparacions: " << comparacions << endl;

    return 0;
}