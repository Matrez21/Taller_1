#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "software.h"
using namespace std;

class Produccion : public Software{
    

public:
    Produccion(string n,string dev,string edad, double p, string tipoSolucion) : Software(n, dev, edad, p), tipoSolucion(tipoSolucion){
        agregarSolucion(tipoSolucion);
    }
    
    Produccion() : Software(){}
    
    static void agregarSolucion(string tipoSolucion) {
        auto it = find(solucionUnicas.begin(), solucionUnicas.end(), tipoSolucion);
        if (it == solucionUnicas.end()) {
            solucionUnicas.push_back(tipoSolucion);
        }
    }
    
    static void eliminarSolucion() {
        cout << "Tipos de solucion Únicas: " << endl;
        for (int i = 0; i < solucionUnicas.size(); ++i) {
            cout << i + 1 << ". " << solucionUnicas[i] << endl;
        }

        int indice;
        cout << "Seleccione una solucion por índice para borrar: ";
        cin >> indice;
        if (indice >= 1 && indice <= solucionUnicas.size()) {
            if (solucionUnicas.size() > 4) {
                string solucionEliminada = solucionUnicas[indice-1];
                solucionUnicas.erase(solucionUnicas.begin() + indice - 1);
                cout << "Solucion '" << solucionEliminada << "' eliminada." << endl;
            } else {
                cout << "No se pueden eliminar más soluciones. Mínimo 4 soluciones necesarias." << endl;
            }
        }else{
            cout << "Opción no válida" << endl;
        }    
    }
    
    static string elegirSolucion() {
        cout << "Tipos de Solucion Únicas: " << endl;
        for (int i = 0; i < solucionUnicas.size(); ++i) {
            cout << i + 1 << ". " << solucionUnicas[i] << endl;
        }

        int opcion;
        cout << "Seleccione un tipo de solucion por índice: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= solucionUnicas.size()) {
            return solucionUnicas[opcion - 1];
        } else {
            cout << "Opción no válida. Seleccionando tipo de solucion predeterminado." << endl;
            return "Tipo de solucion Genérico";
        }
    }
    
    static void mostrarSolucionesUnicas() {
        cout << "Tipos de Solucion Únicas: ";
        for (auto& solucion : solucionUnicas) {
            cout << solucion << " || ";
        }
        cout << endl;
    }
    
    void setTipoSolucion(string tipo) {
        tipoSolucion = tipo;
    }
    string getTipoSolucion() const {
        return tipoSolucion;
    }
    
    void mostrarInformacion() const override {
        Software::mostrarInformacion();
        cout << "Tipo: " << tipoSolucion << endl;
    }
    
    void mostrarUsuarios() const override {
        Software::mostrarUsuarios();
    }
    
private:
    string tipoSolucion;
    static vector<string> solucionUnicas;    
};
