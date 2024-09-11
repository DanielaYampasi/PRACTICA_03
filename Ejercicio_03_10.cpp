/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 11/09/2024
Número de ejercicio: 10
Problema planteado: panhales
*/

#include <iostream>
#include <random>
#include <ctime>
using namespace std;

void generar (int&, int&, int&, int);
int cont(int, int, int);
int main (){
    int n,de1,de2,de3 ;
    cout<< "ingrese la cantidad de ninhos" << endl;
    cin>> n;

    generar(de1, de2, de3, n);
        cout << "Hay " << de1 << "ninhos de 1 anho" << endl;
        cout << "Hay " << de2 << "ninhos de 2 anhos" << endl;
        cout << "Hay " << de3 << "ninhos de 3 anhos" << endl;
        cout << "se necesitan " << cont(de1, de2, de3) << " de panhales diarios"<< endl;

    return 0;
}
void generar (int& de1, int& de2, int& de3, int n){
    srand(time(0));
    de1= rand()% n;
    de2= rand()% (n - de1);
    de3= n- (de2 + de1);
}
int cont (int de1, int de2, int de3){
    return (de1*6)+ (de2*3)+ (de3*2);
}