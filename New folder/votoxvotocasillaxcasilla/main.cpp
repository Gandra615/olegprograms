#include <iostream>

using namespace std;

int main()
{
    int pri = 0, pan = 0, morena = 0;
    int totalVotos = 0;
    int opcion;

    do {
        cout << "INE\n";
        cout << "SELECCIONA EL PARTIDO PARA ASIGNAR TU VOTO\n";
        cout << "1.- PRI\n";
        cout << "2.- PAN\n";
        cout << "3.- MORENA\n";
        cout << "4.- Terminar votaciones\n";
        cin >> opcion;

        switch (opcion) {
            case 1:
                pri++;
                break;
            case 2:
                pan++;
                break;
            case 3:
                morena++;
                break;
            case 4:
                cout << "Votaciones terminadas\n";
                break;
            default:
                cout << "Opción no válida. Intente nuevamente.\n";
                break;
        }

        totalVotos = pri + pan + morena;

        cout << "Votos individuales:\n";
        cout << "PRI: " << pri << "\n";
        cout << "PAN: " << pan << "\n";
        cout << "MORENA: " << morena << "\n";
        cout << "Total de votos: " << totalVotos << "\n\n";

    } while (opcion != 4);

    // Determinar partido ganador
    if (pri > pan && pri > morena) {
        cout << "El partido ganador es: PRI\n";
    } else if (pan > pri && pan > morena) {
        cout << "El partido ganador es: PAN\n";
    } else if (morena > pri && morena > pan) {
        cout << "El partido ganador es: MORENA\n";
    } else {
        cout << "No hay un partido ganador claro.\n";
    }

    return 0;
}
