#include <iostream>
using namespace std;
struct  datosPersona{
    string nombre;
    char inicial;
    int edad;
    float nota;
};


int main (){
datosPersona persona;
persona.nombre= "Juan";
persona.inicial= 'J';
persona.edad= 9;
persona.nota=10;

cout << persona.nombre << "\n";
cout << persona.inicial << "\n";
cout << persona.edad << "\n";
cout << persona.nota << "\n";
    return 0;
}