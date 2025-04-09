 
#include <iostream>
using namespace std;

int main() {
    const int TAM = 5;
    float alturas[TAM];
    float suma = 0;

    // Cargar alturas
    for (int i = 0; i < TAM; i++) {
        cout << "Ingrese la altura de la persona " << i + 1 << ": ";
        cin >> alturas[i];
        suma += alturas[i];
    }

    // Calcular promedio
    float promedio = suma / TAM;
    cout << "\nEl promedio de alturas es: " << promedio << " metros" << endl;

    // Contar mayores y menores o iguales
    int masAltos = 0, noMasAltos = 0;
    for (int i = 0; i < TAM; i++) {
        if (alturas[i] > promedio)
            masAltos++;
        else
            noMasAltos++;
    }

    cout << "Personas más altas que el promedio: " << masAltos << endl;
    cout << "Personas igual o más bajitas que el promedio: " << noMasAltos << endl;

    return 0;
}
