#include <iostream>
#include <cmath>

using namespace std;
int suma(int n) {
	//inicializacion de variables
    int suma = 0;
    int i = 0;
    //ciclo while en el que se procede a sacar la suma de los numero antes de el.
    while (i <= n) {
        suma += i;
        i++;
    }
    return suma;
}
int main() {
	//Declaracion de variable
    int num;
    //Pidiendo al usuario ingresar un numero que se declarara en la variable declarada
    cout << "Ingrese un numero entero positivo: ";
    cin >> num;
	//Imprimiendo el resultado
    cout << "Suma de " << num << ": " << suma(num) << endl;

    return 0;
}
