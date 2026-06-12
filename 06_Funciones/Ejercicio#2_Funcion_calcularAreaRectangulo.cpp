#include <iostream>
using namespace std;

// Función que calcula el área de un rectángulo
int calcularAreaRectangulo(int base, int altura)
{
    return base * altura;
}

int main()
{
    int base, altura;
    int area;

    cout << "Ingrese la base del rectangulo: ";
    cin >> base;

    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    area = calcularAreaRectangulo(base, altura);

    cout << "El area del rectangulo es: " << area << endl;

    return 0;
}