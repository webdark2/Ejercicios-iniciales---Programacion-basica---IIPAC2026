#include <iostream>
using namespace std;

// Función que recibe un número entero y devuelve true si es par
bool esPar(int numero)
{
    return numero % 2 == 0;
}

int main()
{
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if (esPar(numero))
    {
        cout << "El numero es PAR." << endl;
    }
    else
    {
        cout << "El numero es IMPAR." << endl;
    }

    return 0;
}