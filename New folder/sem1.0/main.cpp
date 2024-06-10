#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int choice;

    cout << "SELECCIONE UNA OPCI�N:\n";
    cout << "1. ECUACI�N 2X2\n";
    cout << "2. ECUACI�N 3X3\n";
    cout << "INGRESE EL N�MERO QUE DESEA: ";
    cin >> choice;

    float coefficients2x2[4];
    float coefficients3x3[9];

    switch (choice) {
        case 1:
            cout << "ingrese a, b, c, d:\n";
            for (int i = 0; i < 4; i++) {
                cin >> coefficients2x2[i];
            }

            if (coefficients2x2[0] * coefficients2x2[3] - coefficients2x2[1] * coefficients2x2[2] != 0) {
                float x = (coefficients2x2[0] * coefficients2x2[3] - coefficients2x2[1] * coefficients2x2[2]) / (coefficients2x2[0] * coefficients2x2[3] - coefficients2x2[1] * coefficients2x2[2]);
                float y = (coefficients2x2[2] * coefficients2x2[0] - coefficients2x2[1] * coefficients2x2[3]) / (coefficients2x2[0] * coefficients2x2[3] - coefficients2x2[1] * coefficients2x2[2]);
                cout << fixed << setprecision(2);
                cout << "EL DETERMINANTE ES: " << coefficients2x2[0] * coefficients2x2[3] - coefficients2x2[1] * coefficients2x2[2] << endl;
                cout << "LA SOLUCI�N ES x = " << x << " AND y = " << y << endl;
            } else {
                cout << "EL SISTEMA NO TIENE UNA SOLUCI�N �NICA." << endl;
            }
            break;

        case 2:
            cout << "INGRESE LOS N�MEROS a, b, c, d, e, f, g, h, and i:\n";
            for (int i = 0; i < 9; i++) {
                cin >> coefficients3x3[i];
            }

            float det = coefficients3x3[0] * (coefficients3x3[4] * coefficients3x3[8] - coefficients3x3[5] * coefficients3x3[7]) -
                        coefficients3x3[1] * (coefficients3x3[3] * coefficients3x3[8] - coefficients3x3[5] * coefficients3x3[6]) +
                        coefficients3x3[2] * (coefficients3x3[3] * coefficients3x3[7] - coefficients3x3[4] * coefficients3x3[6]);

            if (det != 0) {
                cout << "The system has a unique solution.\n";
                cout << "However, calculating the solution for a 3x3 system using Cramer's rule\n";
                cout << "can be complex and prone to rounding errors. Consider alternative\n";
                cout << "methods like Gaussian elimination for larger systems.\n";
            } else {
                cout << "The system has no unique solution or infinitely many solutions." << endl;
            }
            break;

        default:
            cout << "Opci�n inv�lida." << endl;
    }

    return 0;
}
