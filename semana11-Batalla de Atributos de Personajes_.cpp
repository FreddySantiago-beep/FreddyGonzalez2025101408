#include <iostream>
#include <string>
using namespace std;

// Estructura que representa a un personaje del juego
struct Personaje {
    string nombre;
    int puntosFuerza;
};

// Pide los datos de un personaje y lo devuelve
Personaje leerPersonaje(int numero) {
    Personaje p;

    cout << "\n Personaje " << numero << "\n";
    cout << "Nombre: ";
    cin >> p.nombre;

    cout << "Puntos de fuerza: ";
    cin >> p.puntosFuerza;

    return p;
}

int main() {
    cout << "BATALLA DE ATRIBUTOS DE PERSONAJES\n";

    Personaje p1 = leerPersonaje(1);
    Personaje p2 = leerPersonaje(2);

    cout << "\nRESULTADO\n";
    cout << p1.nombre << " -> " << p1.puntosFuerza << " puntos de fuerza\n";
    cout << p2.nombre << " -> " << p2.puntosFuerza << " puntos de fuerza\n";
    cout << "\n";

    if (p1.puntosFuerza > p2.puntosFuerza) {
        cout << "El mas fuerte es: " << p1.nombre << "!\n";
    } else if (p2.puntosFuerza > p1.puntosFuerza) {
        cout << "El mas fuerte es: " << p2.nombre << "!\n";
    } else {
        cout << "Empate! " << p1.nombre << " y " << p2.nombre
             << " tienen la misma fuerza.\n";
    }

    return 0;
}
