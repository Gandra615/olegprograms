#include<iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void printPrimes(int start, int end) {
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) cout << num << " ";
    }
}

void printEven(int start, int end) {
    for (int num = start; num <= end; num++) {
        if (num % 2 == 0) cout << num << " ";
    }
}

void printOdd(int start, int end) {
    for (int num = start; num <= end; num++) {
        if (num % 2 != 0) cout << num << " ";
    }
}

int main() {
    int start, end, choice;
    cout << "INGRESE EL RANGO INICIAL Y EL RANGO FINAL: ";
    cin >> start >> end;
    cout << "\n1. NUMEROS PRIMOS\n2. NUMEROS PARES\n3. NUMEROS IMPARES\nINGRESE UNA OPCCION: ";
    cin >> choice;

    switch(choice) {
        case 1:
            printPrimes(start, end);
            break;
        case 2:
            printEven(start, end);
            break;
        case 3:
            printOdd(start, end);
            break;
        default:
            cout << "OPCCION INVALIDA!";
    }

    return 0;
}
