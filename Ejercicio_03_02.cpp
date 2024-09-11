/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 11/09/2024
Número de ejercicio: 2
Problema planteado: lanzamiento de caras pares
*/

#include <iostream>
#include <random>
#include <ctime>

using namespace std;

void Cont();

int main(){
   Cont();
   return 0;
}

void Cont(){
    srand(time(0));
    int n;
    cout<< "Ingrese el numero de lanzamientos: ";
    cin >> n;
    int par= 0;
    for(int i=0; i<n; i++){
        int x = (rand()% 6)+ 1;
        if(x%2 == 0){
            par++;
        }

    }

    cout << "la frecuencia de repeticion de las caras pares es de: " << par << endl;
}
