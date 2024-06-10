#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Producto {
    string nombre;
    double precio;
    int cantidad;
};

vector<Producto> productosSeleccionados;

void mostrarMenu() {
    cout << "Seleccione un producto:\n";
    cout << "1. Cafe - $20.00\n";
    cout << "2. Refresco - $16.00\n";
    cout << "3. Bolsa de cafe - $45.00\n";
    cout << "4. Galletas - $25.00\n";
    cout << "5. Finalizar compra\n";
}

void agregarProducto(int opcion) {
    Producto producto;
    switch (opcion) {
        case 1:
            producto.nombre = "Cafe";
            producto.precio = 20.00;
            break;
        case 2:
            producto.nombre = "Refresco";
            producto.precio = 16.00;
            break;
        case 3:
            producto.nombre = "Bolsa de cafe";
            producto.precio = 45.00;
            break;
        case 4:
            producto.nombre = "Galletas";
            producto.precio = 25.00;
            break;
        default:
            cout << "Opción inválida\n";
            return;
    }
    cout << "Ingrese la cantidad de " << producto.nombre << " que desea comprar: ";
    cin >> producto.cantidad;
    productosSeleccionados.push_back(producto);
}

void mostrarResumen() {
    double totalAPagar = 0.0;
    cout << "Resumen de la compra:\n";
    for (auto &producto : productosSeleccionados) {
        double subtotal = producto.precio * producto.cantidad;
        cout << "Producto: " << producto.nombre << " - Cantidad: " << producto.cantidad << " - Precio: $" << subtotal << endl;
        totalAPagar += subtotal;
    }
    cout << "Total a pagar: $" << totalAPagar << endl;
}

int main() {
    char respuesta;
    do {
        productosSeleccionados.clear(); // clear the vector for each iteration
        int opcion;
        bool finalizarCompra = false;
        do {
            mostrarMenu();
            cin >> opcion;
            if (opcion == 5) {
                if (finalizarCompra) {
                    break;
                } else {
                    cout << "¿Desea finalizar su compra? (s/n): ";
                    cin >> respuesta;
                    if (respuesta == 's' || respuesta == 'S') {
                        finalizarCompra = true;
                    } else {
                        cout << "Continuando con la compra...\n";
                    }
                }
            } else if (opcion >= 1 && opcion <= 4) {
                agregarProducto(opcion);
            }
        } while (!finalizarCompra);
        mostrarResumen();
        cout << "¿Desea realizar otra compra? (s/n): ";
        cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');
    return 0;
}
