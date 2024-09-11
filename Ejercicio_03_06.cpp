/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 11/09/2024
Número de ejercicio: 6
Problema planteado: Adivina el numero
*/


#include <iostream>
#include <random>
#include <ctime>
using namespace std;

void adivina ();
int main (){
    adivina();
    return 0;
}

void adivina (){
    srand(time(0));
    int num = rand() % 50;

    int intentos = 0, limi = 0, lims = 50;
    bool ganar = false;
    while(intentos < 5){
        cout << "Intento " << intentos + 1 << ":\n";
        cout << "Adivina, soy un numero q esta entre " << limi << " y " << lims << endl;
        int var; cin >> var;
        if(var==num){
            ganar= true;
            intentos= 5;
        } else if (var> limi && var < num){
            limi = var;
        } else if (var< lims && var > num){
            lims = var;
        }
        intentos++;
    }

    if(ganar){
        cout<< "Ganaste, bien hecho\n";
    } else {
        cout<< "Perdiste, intentalo de nuevo\n";

    }
}