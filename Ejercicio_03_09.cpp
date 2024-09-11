/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 11/09/2024
Número de ejercicio: 9
Problema planteado: ceros y unos
*/

#include <iostream>
using namespace std;

void impr (int);
int main (){
    int n;

    cout<< "Ingrese el valor de n: ";
    cin>> n;
    impr(n);
}

void impr(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j< n; j++){
            if((i + j)% 2 == 0)
                cout << "1";
            else 
                cout << "0";
        }

            cout << endl;
    }
}