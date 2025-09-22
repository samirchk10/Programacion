#include <iostream>

using namespace std;

int main() {
    char c;

    cout << "Introdueix un lletra: ";
    cin >> c;

    switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "Vocal" << endl;
            break;
        default:
            cout << "Consonant" << endl;
    }

    return 0;
}