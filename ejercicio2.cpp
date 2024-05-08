#include <iostream>
using namespace std;

int main() {
    char letra;

    do {
        cout << "Este es el menú de hoy. Por favor, seleccione una letra:\n";
        cout << "A. Pizza\n";
        cout << "B. Hamburguesa\n";
        cout << "C. Burritos\n";
        cout << "D. Pescado frito\n";
        cout << "E. Sopa de frijoles\n";
        cout << "X. Salir\n";
        cin >> letra;

        switch (letra) {
            case 'A':
                cout << "Has seleccionado Pizza.\n";
                break;
            case 'B':
                cout << "Has seleccionado Hamburguesa.\n";
                break;
            case 'C':
                cout << "Has seleccionado Burritos.\n";
                break;
            case 'D':
                cout << "Has seleccionado Pescado frito.\n";
                break;
            case 'E':
                cout << "Has seleccionado Sopa de frijoles.\n";
                break;
            case 'X':
                cout << "Saliendo del menú.\n";
                break;
            default:
                cout << "Opción inválida. Por favor, seleccione nuevamente.\n";
        }
    } while (letra != 'X');

    return 0;
}