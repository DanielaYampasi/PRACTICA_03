/*Materia: Programación I, Paralelo 1
Autor: Daniela Alana Yampasi Sandi 
Fecha creación: 11/09/2024
Número de ejercicio: 5
Problema planteado: lanzamiento y porcentajes de caras y sellos
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int lanz();
double calc(int parte, int total) ;
int main() {
    int cant, caras = 0, sellos = 0;

    cout<< "Ingrese el numero de lanzamientos: ";
    cin>> cant;

    srand(time(0));

    for (int i=0; i<cant; ++i) {
        if (lanz()) {
            sellos++;
        } else {
           caras++;
        }
    }

    double PorcCaras= calc(caras, cant);
    double PorcSellos= calc(sellos, cant);

    cout<<"Porcentaje de caras: " << PorcCaras <<"%" << endl;
    cout<<"Porcentaje de sellos: " << PorcSellos << "%" << endl;

    return 0;
}

int lanz() {
    return rand()%2;
}

double calc(int parte, int total) {
    return (double)parte / total * 100;
}