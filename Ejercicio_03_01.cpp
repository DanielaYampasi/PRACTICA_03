/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 11/09/2024
Número de ejercicio: 1
Problema planteado: secuencia
*/

#include <iostream>
using namespace std;

int Serie(double num);
void Sec(int base, int cantidad);
int main() {
    int numi=4; 
    int cant;
    cout<< "ingrese la cantidad de la serie:"; 
    cin>> cant;
    Sec(numi, cant);

    return 0;
}
int Serie(double num) {
    return (num/ 2)*3;
}

void Sec(int base, int cantidad) {
    int actual = base;
    for (int i=0; i<cantidad; ++i) {
        cout<< actual << "\t";
        actual=Serie(actual);
    }
        cout << endl;
}


