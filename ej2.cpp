  
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    int vector[n]; // Vector con n elementos
    int suma = 0;

    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> vector[i];
        suma += vector[i];
    }

    float promedio = (float)suma / n;

    cout << "\nLa suma de los elementos es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
