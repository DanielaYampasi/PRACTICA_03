/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 11/09/2024
Número de ejercicio: 3
Problema planteado: base n a base 10
*/

#include <iostream>
#include <math.h>
using namespace std;

int BaseD(int, int);

int main (){
    int num, base;
    cout << "ingrese la base del numero hasta 10: ";
    cin >> base;
    cout << "Ingrese el numero a convertir";
    cin >> num;
    int result = BaseD(num, base);
    cout << "El numero en base 10 es: "<< result << endl;
}
int BaseD(int num, int base){
    int sum=0, ele=0;
    while(num> 0){
        int digito= num%10;
        sum+= (digito * pow(base, ele));
        ele++;
        num/= 10;
    }

        return sum;
}