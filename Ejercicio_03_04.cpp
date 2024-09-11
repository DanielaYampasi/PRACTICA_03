/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 11/09/2024
Número de ejercicio: 4
Problema planteado: serie elevados
*/

#include <iostream>
using namespace std;

int calc(int n);
void Sec(int n);
int main() {
    int cant;
    cout<< "ingrese la cantidad de la serie:"; 
    cin>> cant;
    Sec(cant);

    return 0;
}
int calc(int n) {
    return n*n;
}

void Sec(int n) {
    int signo= 1;

    for (int i= 1;i<=n; ++i) {
        int termino= signo * calc(i);
        cout<< termino;
        if (i<n) {
            cout << " \t"; 
        signo*= -1;
    }
    ;
}
}
