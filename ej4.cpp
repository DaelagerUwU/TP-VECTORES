  
#include <iostream>
using namespace std;

int main() {
    const int TAM = 10;
    int vec[TAM];

    // Cargar el vector
    for (int i = 0; i < TAM; i++) {
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> vec[i];
    }

    // Buscar máximo y mínimo
    int max = vec[0], min = vec[0];
    for (int i = 1; i < TAM; i++) {
        if (vec[i] > max)
            max = vec[i];
        if (vec[i] < min)
            min = vec[i];
    }

    cout << "\nEl valor máximo es: " << max << endl;
    cout << "El valor mínimo es: " << min << endl;

    return 0;
}
