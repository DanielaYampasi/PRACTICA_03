/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 11/09/2024
Número de ejercicio: 8
Problema planteado: secuencia
*/

#include <iostream>
using namespace std;

void Fil(int);
void Sec();
int main (){
    Sec();

    return 0;
}

void Fil(int n){
    for(int i=1; i<=n; i++){
        cout<< i;
    }
    for(int j=n - 1; j>= 1; j--){
        cout<< j;
    }

    cout<< endl;
}

void Sec(){
    for(int i=2; i<=9; i++){
        Fil(i);
    }
}
