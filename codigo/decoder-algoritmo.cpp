#include <iostream>
using namespace std;

int main() {

    char alfabeto[] = {
        'A','B','C','D','E','F','G','H','I','J','K','L','M',
        'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'
    };

    char letra;
    int posicion;

    cout << "======================================" << endl;
    cout << "        CIFRADO CESAR +1" << endl;
    cout << "======================================" << endl;
    cout << "INDICACIONES:" << endl;
    cout << "- Solo puedes escribir letras MAYUSCULAS." << endl;
    cout << "- Para terminar el mensaje escribe el numero 0." << endl;
    cout << "- Cada letra se cambiara por la siguiente." << endl;
    cout << "- Z se convierte en A." << endl;
    cout << "======================================" << endl;

    cout << "Escribe tu mensaje: " << endl;

    cin >> letra;

    cout << "Mensaje cifrado: ";

    while (letra != '0') {

        posicion = 0;

        while (posicion < 26 && alfabeto[posicion] != letra) {
            posicion++;
        }

        if (posicion < 26) {

            if (posicion == 25) {
                cout << alfabeto[0];
            } else {
                cout << alfabeto[posicion + 1];
            }

        } else {
            cout << "?";
        }

        cin >> letra;
    }

    cout << endl;
    cout << "Mensaje terminado." << endl;

    return 0;
}
