#include <iostream>
using namespace std;

// Función que recibe un número entero y devuelve true si es par
bool esPar(int numero)
{
    return numero % 2 == 0; // Un número es par si el residuo de la división entre 2 es 0
}

int main()
{
    int numero; // Variable para almacenar el número ingresado por el usuario

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (esPar(numero)) // Llamada a la función para verificar si el número es par
    {
        cout << "El numero es PAR." << endl;
    }
    else
    {
        cout << "El numero es IMPAR." << endl;
    }

    return 0;
}