#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double angulo1, angulo2, lado1, lado2, lado3;
    int opcion;

    cout << "\tPrograma para calcular sen y cos\n";
    cout << "\t\tHecho por Meli UwU\n\n";

    while (true) {
        cout << "Seleccione una opcion:\n";
        cout << "1. ley de senos\n";
        cout << "2. ley de cosenos\n";
        cout << "3. finalizar el programa\n";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el primer angulo (en grados): ";
                cin >> angulo1;
                cout << "Ingrese el segundo angulo (en grados): ";
                cin >> angulo2;
                cout << "Ingrese el lado conocido: ";
                cin >> lado1;

                angulo1 = angulo1 * M_PI / 180.0;
                angulo2 = angulo2 * M_PI / 180.0;
                lado2 = lado1 * sin(angulo2) / sin(angulo1);
                lado3 = lado1 * sin(M_PI - angulo1 - angulo2) / sin(angulo1);

                cout << "Ángulo 1: " << angulo1 * 180.0 / M_PI << " grados" << endl;
                cout << "Lado 1: " << lado1 << endl;
                cout << "Ángulo 2: " << angulo2 * 180.0 / M_PI << " grados" << endl;
                cout << "Lado 2: " << lado2 << endl;
                cout << "Ángulo 3: " << (M_PI - angulo1 - angulo2) * 180.0 / M_PI << " grados" << endl;
                cout << "Lado 3: " << lado3 << endl;
                break;

            case 2:
                cout << "Ingrese el primer lado: ";
                cin >> lado1;
                cout << "Ingrese el segundo lado: ";
                cin >> lado2;
                cout << "Ingrese el ángulo (en grados): ";
                cin >> angulo2;

                angulo2 = angulo2 * M_PI / 180.0;
                lado3 = sqrt(pow(lado1, 2) + pow(lado2, 2) - 2 * lado1 * lado2 * cos(angulo2));
                angulo1 = acos((pow(lado2, 2) + pow(lado3, 2) - pow(lado1, 2)) / (2 * lado2 * lado3));
                angulo2 = acos((pow(lado1, 2) + pow(lado3, 2) - pow(lado2, 2)) / (2 * lado1 * lado3));

                cout << "Angulo: " << angulo2 * 180.0 / M_PI << " grados" << endl;
                cout << "Lado 1: " << lado1 << endl;
                cout << "Lado 2: " << lado2 << endl;
                cout << "Angulo 1: " << angulo1 * 180.0 / M_PI << " grados" << endl;
                cout << "Angulo 2: " << angulo2 * 180.0 / M_PI << " grados" << endl;
                cout << "Lado 3: " << lado3 << endl;
                break;

            case 3:
                cout << "Finalizando el programa..." << endl;
                return 0;

            default:
                cout << "Opción inválida. Intente de nuevo." << endl;
        }
    }

    return 0;
}
