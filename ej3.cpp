  
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> n;

    int vec[100]; // max 100 por seguridad UwU

    // Carga del vector
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el elemento " << i + 1 << ": ";
        cin >> vec[i];
    }

    // a. Duplicar cada valor
    for (int i = 0; i < n; i++) {
        vec[i] *= 2;
    }

    cout << "\nVector con los valores duplicados:\n";
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // b. Insertar nuevo elemento en posición dada
    int nuevo, pos;
    cout << "\nIngrese nuevo valor a insertar: ";
    cin >> nuevo;
    cout << "Ingrese la posición donde insertarlo (0 a " << n << "): ";
    cin >> pos;

    if (pos >= 0 && pos <= n) {
        for (int i = n; i > pos; i--) {
            vec[i] = vec[i - 1];
        }
        vec[pos] = nuevo;
        n++; // aumento el tamaño

        cout << "\nVector tras insertar el nuevo valor:\n";
        for (int i = 0; i < n; i++) {
            cout << vec[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Posición inválida >n<" << endl;
    }

    // c. Eliminar elementos con valor cero
    int nuevoTam = 0;
    for (int i = 0; i < n; i++) {
        if (vec[i] != 0) {
            vec[nuevoTam] = vec[i];
            nuevoTam++;
        }
    }

    cout << "\nVector tras eliminar los ceros:\n";
    for (int i = 0; i < nuevoTam; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
