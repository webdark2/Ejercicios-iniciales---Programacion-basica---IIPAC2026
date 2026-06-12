#include <iostream>
using namespace std;

// Función que calcula el área de un rectángulo
int calcularAreaRectangulo(int base, int altura)
{
    return base * altura; // El área de un rectángulo se calcula multiplicando la base por la altura
}

int main()
{
    int base, altura; // Variables para almacenar la base y la altura del rectángulo
    int area; // Variable para almacenar el área calculada

    cout << "Ingrese la base del rectangulo: ";
    cin >> base;

    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    area = calcularAreaRectangulo(base, altura); // Llamada a la función para calcular el área del rectángulo

    cout << "El area del rectangulo es: " << area << endl;

    return 0;
}