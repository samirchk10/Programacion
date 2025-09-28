#include <iostream>

using namespace std;

int numeroDies(int mes, int any) {
    int dies = -1;
    
    switch(mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
            dies = 31;
            break;

        case 4: case 6: case 9: case 11:
            dies = 30;
            break;

        case 2:
            dies = (any % 4 == 0 && any % 100 != 0 || any % 400 == 0) ? 29 : 28;
            break;

        default:
            break;
    }

    return dies;
}

int main(){
    int dd, mm, aaaa;
    char separador1, separador2;

    cout << "Introdueix una data en format DD/MM/AAAA: ";
    cin >> dd >> separador1 >> mm >> separador2 >> aaaa;
 
    int dies = numeroDies(mm, aaaa);

    if (dies == -1){
        cout << "Error: mes incorrecte" << endl;
        
        return 0;
    }

    if (dd >=1 && dd <= dies)
        cout << "Data correcta" << endl;
    else
        cout << "Error: dia incorrecte" << endl;
    
    return 0;
}
