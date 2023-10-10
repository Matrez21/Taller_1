#include <iostream>
#include <vector>
#include <algorithm>
#include "software.h"
using namespace std;

class Juegos : public Software {
public:
    
    Juegos(string n, string dev, string edad, double p, string genero) : Software(n, dev, edad, p), genero(genero) {
        agregarGenero(genero);
    }
    
    Juegos() : Software(){}

    
    static void agregarGenero(string genero) {
        auto it = find(generosUnicos.begin(), generosUnicos.end(), genero);
        if (it == generosUnicos.end()) {
            generosUnicos.push_back(genero);
        }
    }
    
    static void eliminarGenero() {
        cout << "Géneros Únicos: " << endl;
        for (int i = 0; i < generosUnicos.size(); ++i) {
            cout << i + 1 << ". " << generosUnicos[i] << endl;
        }

        int indice;
        cout << "Seleccione un género por índice para borrar: ";
        cin >> indice;
        if (indice >= 1 && indice <= generosUnicos.size()) {
            if (generosUnicos.size() > 10) {
                string generoEliminado = generosUnicos[indice-1];
                generosUnicos.erase(generosUnicos.begin() + indice - 1);
                cout << "Género '" << generoEliminado << "' eliminado." << endl;
            } else {
                cout << "No se pueden eliminar más géneros. Mínimo 10 géneros necesarios." << endl;
            }
        }else{
            cout << "Opción no válida" << endl;
        }    
    }
    
    static string elegirGenero() {
        cout << "Géneros Únicos: " << endl;
        for (int i = 0; i < generosUnicos.size(); ++i) {
            cout << i + 1 << ". " << generosUnicos[i] << endl;
        }

        int opcion;
        cout << "Seleccione un género por índice: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= generosUnicos.size()) {
            return generosUnicos[opcion - 1];
        } else {
            cout << "Opción no válida. Seleccionando género predeterminado." << endl;
            return "Género Genérico";
        }
    }

    static void mostrarGenerosUnicos() {
        cout << "Géneros Únicos: ";
        for (auto& genero : generosUnicos) {
            cout << genero << " || ";
        }
        cout << endl;
    }
    
    void mostrarInformacion() const override {
        Software::mostrarInformacion();
        cout << "Género: " << genero << endl;
    }

    void mostrarUsuarios() const override {
        Software::mostrarUsuarios();
    }

private:
    string genero;
    static vector<string> generosUnicos;
};