#include "main.h"
#include <iostream>

#include "Estudiante.h"
#include "Persona.h"
using namespace std;

int a = 4;
int b = 2;


int suma(int a, int b) {
    return a+b;

}

int main() {

    cout<<"Hola Mundo!"<<endl;
    cout<<"Si a es: "<<a<<endl;
    cout<<"Y b es: "<<b<<endl;
    cout<<"La suma de a + b es: "<<suma(a,b)<<endl;

Persona persona1;
    persona1.setNombre("Miguel");
    persona1.setEdad(18);
    persona1.setGenero("Masculino");
cout<<"Nombre: "<<persona1.getNombre()<<endl;
    cout<<"Edad: "<<persona1.getEdad()<<endl;
    cout<<"Genero: "<<persona1.getGenero()<<endl;

    Estudiante estudiante1;
    estudiante1.setNombre("Miguel");
    estudiante1.setEdad(18);
    estudiante1.setGenero("Masculino");
    estudiante1.setGrado("Ingeniería Informática");



    return 0;
}
