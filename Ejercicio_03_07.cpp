/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 11/09/2024
Número de ejercicio: 7
Problema planteado: secuencia
*/


#include <iostream>
using namespace std;

void Fil (int);
void Sec();
int main (){
    Sec(); 
    return 0;
}
void Fil(int n){
    for(int i=1; i<=n;i++)
        cout << i;
    
    cout<< endl;
}

void Sec(){
    int n;

    cout << "Ingerese n: ";
    cin>> n;
    for(int i=0; i<n; i++){
        Fil(n-i);

    } 
}