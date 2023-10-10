#include "software.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Seguridad : public Software {

    
public:
    Seguridad(string n,string dev,string edad, double p, string tipoMalware) : Software(n, dev, edad, p), tipoMalware(tipoMalware) {
        agregarMalware(tipoMalware);
    }
    
    Seguridad() : Software(){}
    
    static void agregarMalware(string tipoMalware) {
        auto it = find(malwareUnico.begin(), malwareUnico.end(), tipoMalware);
        if (it == malwareUnico.end()) {
            malwareUnico.push_back(tipoMalware);
        }
    }
    
    static void eliminarMalware() {
        cout << "Tipos de Malware Únicos: " << endl;
        for (int i = 0; i < malwareUnico.size(); ++i) {
            cout << i + 1 << ". " << malwareUnico[i] << endl;
        }

        int indice;
        cout << "Seleccione un malware por índice para borrar: ";
        cin >> indice;
        if (indice >= 1 && indice <= malwareUnico.size()) {
            if (malwareUnico.size() > 6) {
                string malwareEliminado = malwareUnico[indice-1];
                malwareUnico.erase(malwareUnico.begin() + indice - 1);
                cout << "Malware '" << malwareEliminado << "' eliminado." << endl;
            } else {
                cout << "No se pueden eliminar más malwares. Mínimo 6 malwares necesarios." << endl;
            }
        }else{
            cout << "Opción no válida" << endl;
        }    
    }
    
    static void mostrarMalwaresUnicos() {
        cout << "Tipos de Malwares Únicos: ";
        for (auto& malware : malwareUnico) {
            cout << malware << " || ";
        }
        cout << endl;
    }
    
    void setTipoMalware(string tipo){
        tipoMalware = tipo;
    }
    
    string getTipoMalware(){
        return tipoMalware;
    }
    
    void mostrarInformacion() const override {
        Software::mostrarInformacion();
        cout << "Tipo de malware: " << tipoMalware << endl;
    }
    
    void mostrarUsuarios() const override {
        Software::mostrarUsuarios();
    }
    
    
private:
    string tipoMalware;
    static vector<string> malwareUnico;   
};