#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcion;
    double a, b, c, A, B, C;

    cout << "Seleccione la opci�n deseada:\n";
    cout << "1. Ley de senos (dos lados y un �ngulo)\n";
    cout << "2. Ley de senos (dos �ngulos y un lado)\n";
    cout << "3. Ley de cosenos\n";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingrese los dos lados y el �ngulo:\n";
            cin >> a >> b >> A;
            C = asin(sin(A) / (a / b));
            c = b * sin(A) / sin(C);
            B = M_PI - A - C;
            cout << "Lado c: " << c << endl;
            cout << "�ngulo B: " << B << endl;
            cout << "�ngulo C: " << C << endl;
            break;
        case 2:
            cout << "Ingrese los dos �ngulos y el lado:\n";
            cin >> A >> B >> a;
            C = M_PI - A - B;
            b = a * sin(B) / sin(A);
            c = a * sin(C) / sin(A);
            cout << "Lado b: " << b << endl;
            cout << "Lado c: " << c << endl;
            break;
        case 3:
            cout << "Ingrese los tres lados:\n";
            cin >> a >> b >> c;
            A = acos((b*b + c*c - a*a) / (2*b*c));
            B = acos((a*a + c*c - b*b) / (2*a*c));
            C = M_PI - A - B;
            cout << "�ngulo A: " << A << endl;
            cout << "�ngulo B: " << B << endl;
            cout << "�ngulo C: " << C << endl;
            break;
        default:
            cout << "Opci�n inv�lida" << endl;
            break;
    }

    return 0;
}
