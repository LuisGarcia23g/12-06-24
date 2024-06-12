//Ejercicio 12.06.24
#include <iostream>
#include <conio.h>
using namespace std;

int main (){
    string num[100][100];
    int filas, columnas; 

cout << "Digite el numero de filas: ";
cin >> filas;
cout << "Digite el numero de columnas: ";
cin >> columnas;

//Rellenando la matriz
for (int i=0; i<filas; i++){
    for (int j=0; j<columnas; j++){
        cout << "Digite un numero [" << i << "][" << j << "]: ";
        cin >> num[i][j];
    }
}

cout << "\nMostrando martiz\n\n";

for (int i=0; i<filas; i++){
    for (int j=0; j<columnas; j++){
        cout << num[i][j];
        cout << "|";
    }
    cout << "\n";
}

getch();

return 0;
}