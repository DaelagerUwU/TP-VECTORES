  
#include <iostream>
using namespace std;

int main() {
    const int TAM = 5;
    int vec[TAM] = {2, 4, 6, 8, 10}; // Valores de ejemplo
    int suma = 0;

    for (int i = 0; i < TAM; i++) {
        suma += vec[i];
    }

    cout << "La suma de los elementos es: " << suma << endl;

    return 0;
}
