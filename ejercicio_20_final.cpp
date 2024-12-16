#include <iostream>
#include <string>
using namespace std;

string encriptarPalabra(const string& palabra, int clave);
void desencriptarPalabra(const string& palabraEncriptada);

// Funci�n principal
int main() {
    string palabraEncriptada;

    // Solicitar palabra encriptada al usuario
    cout << "Ingrese la palabra encriptada: ";
    cin >> palabraEncriptada;

    // Llamar a la funci�n para desencriptar
    desencriptarPalabra(palabraEncriptada);

    return 0;
}

// Funci�n para encriptar una palabra
string encriptarPalabra(const string& palabra, int clave) {
    string palabraEncriptada = "";
    for (char letra : palabra) {
        palabraEncriptada += char(letra + clave); // Sumar la clave al ASCII
    }
    return palabraEncriptada;
}

// Funci�n para desencriptar una palabra
void desencriptarPalabra(const string& palabraEncriptada) {
    cout << "Posibles palabras desencriptadas:" << endl;
    for (int clave = 1; clave <= 5; ++clave) {
        string palabraDesencriptada = "";
        for (char letra : palabraEncriptada) {
            palabraDesencriptada += char(letra - clave); // Restar la clave al ASCII
        }
        cout << "Clave " << clave << ": " << palabraDesencriptada << endl;
    }
}
