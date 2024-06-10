#include <iostream>
#include <cmath>

using namespace std;

void resolverSistema2x2(double a11, double a12, double b1, double a21, double a22, double b2) {
  double det = a11 * a22 - a12 * a21;

  if (det == 0) {
    cout << "El sistema de ecuaciones no tiene solucion unica o infinitas." << endl;
    return;
  }

  double x = (b1 * a22 - b2 * a12) / det;
  double y = (a11 * b2 - a21 * b1) / det;

  cout << "Solucion: " << endl;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
}

void resolverSistema3x3(double a11, double a12, double a13, double b1, double a21, double a22, double a23, double b2, double a31, double a32, double a33, double b3) {
  double det = a11 * (a22 * a33 - a23 * a32) - a12 * (a21 * a33 - a23 * a31) + a13 * (a21 * a32 - a22 * a31);

  if (det == 0) {
    cout << "El sistema de ecuaciones no tiene solucion unica o infinitas." << endl;
    return;
  }

  double x = (b1 * (a22 * a33 - a23 * a32) - b2 * (a11 * a33 - a13 * a32) + b3 * (a11 * a22 - a12 * a21)) / det;
  double y = (a11 * (b2 * a33 - b3 * a23) - a12 * (b1 * a33 - b3 * a31) + a13 * (b1 * a22 - b2 * a21)) / det;
  double z = (a11 * (a23 * b2 - a22 * b1) - a12 * (a21 * b2 - a22 * b1) + a13 * (a21 * b1 - a22 * b2)) / det;

  cout << "Solucion: " << endl;
  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  cout << "z = " << z << endl;
}

int main() {
  int opcion;

  cout << "Seleccione el tipo de sistema de ecuaciones a resolver:" << endl;
  cout << "1. Sistema 2x2" << endl;
  cout << "2. Sistema 3x3" << endl;
  cout << "Opcion: ";
  cin >> opcion;

  switch (opcion) {
    case 1: {
      double a11, a12, b1, a21, a22, b2;

      cout << "Ingrese los coeficientes de la matriz A (fila 1): ";
      cin >> a11 >> a12;
      cout << "Ingrese los coeficientes de la matriz A (fila 2): ";
      cin >> a21 >> a22;
      cout << "Ingrese el vector b: ";
      cin >> b1 >> b2;

      resolverSistema2x2(a11, a12, b1, a21, a22, b2);
      break;
    }
    case 2: {
      double a11, a12, a13, b1, a21, a22, a23, b2, a31, a32, a33, b3;

      cout << "Ingrese los coeficientes de la matriz A (fila 1): ";
      cin >> a11 >> a12 >> a13;
      cout << "Ingrese los coeficientes de la matriz A (fila 2): ";
      cin >> a21 >> a22 >> a23;
      cout << "Ingrese los coeficientes de la matriz A (fila 3): ";
      cin >> a31 >> a32 >> a33;

      resolverSistema3x3(a11, a12, a13, b1, a21, a22, a23, b2, a31, a32, a33, b3);
      break;
    }
    default:
      cout << "Opción no válida." << endl;
  }

  return 0;
}

