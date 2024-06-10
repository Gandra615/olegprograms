#include <iostream>
#include <string> // Necesario para usar la clase string

using namespace std;

int main() {
  string nombreAlumno; // Variable para almacenar el nombre del alumno
  int aciertos = 0;
  int errores = 0;

  // Solicitar el nombre del alumno
  cout << "Ingrese el nombre del alumno: ";
  getline(cin, nombreAlumno);

  // Pregunta 1
  char respuesta1;
  cout << "¿Para que sirve un monitor?" << endl;
  cout << "(a) Para ver la novela" << endl;
  cout << "(b) Para hacer una pecera" << endl;
  cout << "(c) Para mostrar la imagen de una computadora o dispositivo de entrada" << endl;
  cin >> respuesta1;

  if (respuesta1 == 'c') {
    aciertos++;
  } else {
    errores++;
  }

  // Pregunta 2
  char respuesta2;
  cout << "¿Para que sirve un disco duro?" << endl;
  cout << "(a) Para transmitir videos a la tele" << endl;
  cout << "(b) Para guardar informacion de un dispositivo" << endl;
  cout << "(c) Para poner agua en mi casa" << endl;
  cin >> respuesta2;

  if (respuesta2 == 'b') {
    aciertos++;
  } else {
    errores++;
  }

  // Pregunta 3
  char respuesta3;
  cout << "¿Que es Linux?" << endl;
  cout << "(a) Una terminal" << endl;
  cout << "(b) Un programa de canal 5" << endl;
  cout << "(c) Un sistema operativo personalizable y de codigo abierto" << endl;
  cin >> respuesta3;

  if (respuesta3 == 'c') {
    aciertos++;
  } else {
    errores++;
  }

  // Calcular y mostrar los resultados
  cout << "\n-- Resultados --" << endl;
  cout << "Alumno: " << nombreAlumno << endl;
  cout << "Aciertos: " << aciertos << endl;
  cout << "Errores: " << errores << endl;
  float calificacion = (aciertos * 100.0) / (aciertos + errores); // Convertir a float para la división decimal
  cout << "Calificacion: " << calificacion << "%" << endl;

  return 0;
}

