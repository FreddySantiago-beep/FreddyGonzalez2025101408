#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// 1. Definicion del struct Personaje
struct Personaje {
    string nombre;
    int vida;
    int ataque;
};

// 2. Funcion para registrar y guardar usando ofstream con ios::app
void registrarPersonaje() {
    Personaje p;

    cout << "Nombre: ";
    cin >> p.nombre;
    cout << "Vida: ";
    cin >> p.vida;
    cout << "Ataque: ";
    cin >> p.ataque;

    ofstream archivo("personajes.txt", ios::app);

    // Validación obligatoria con is_open()
    if (!archivo.is_open()) {
        cout << "Error: No se pudo abrir el archivo." << endl;
        return;
    }

    archivo << p.nombre << " " << p.vida << " " << p.ataque << endl;

    archivo.close(); // Cierre del flujo
    cout << "Personaje guardado correctamente." << endl;
}

// 3. Función para leer y mostrar usando ifstream y getline()
void verPersonajes() {
    ifstream archivo("personajes.txt");

    // Validación obligatoria con is_open()
    if (!archivo.is_open()) {
        cout << "Error: El archivo no existe o no se pudo abrir." << endl;
        return;
    }

    string linea;
    cout << "\nLista de Personajes Guardados " << endl;
    
    // Lectura secuencial línea por linea exactamente como enseña la diapositiva
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }

    archivo.close(); // Cierre del flujo
}

int main() {
    int opcion;

    do {
        cout << "\n[1] Registrar nuevo personaje" << endl;
        cout << "[2] Ver todos los personajes guardados" << endl;
        cout << "[3] Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                registrarPersonaje();
                break;
            case 2:
                verPersonajes();
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
        }
    } while (opcion != 3);

    return 0;
}
