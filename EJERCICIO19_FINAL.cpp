#include <iostream>
#include <string>
using namespace std;

string encriptarPalabra(string palabra, int clave) {
    string palabraEncriptada = "";
    for (char letra : palabra) {
        // Incrementar el valor ASCII de la letra seg�n la clave
        palabraEncriptada += char(letra + clave);
    }
    return palabraEncriptada;
}

int main() {
    string palabra;
    int clave;

    // Solicitar palabra al usuario
    cout << "Ingrese una palabra para encriptar: ";
    cin >> palabra;

    // Solicitar clave de encriptaci�n
    do {
        cout << "Ingrese una clave (n�mero del 1 al 5): ";
        cin >> clave;
        if (clave < 1 || clave > 5) {
            cout << "Clave inv�lida. Por favor, ingrese un n�mero entre 1 y 5.\n";
        }
    } while (clave < 1 || clave > 5);

    // Encriptar la palabra
    string palabraEncriptada = encriptarPalabra(palabra, clave);

    // Mostrar resultado
    cout << "Palabra encriptada: " << palabraEncriptada << endl;

    return 0;
}
