#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    float num1, num2, resultado;
    char operador;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el operador (+, -, *, /): ";
    cin >> operador;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                cout << "Error: División por cero no permitida." << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Operador inválido." << endl;
            return 1;
    }

    cout << "El resultado es: " << resultado << endl;

    getch();
}
