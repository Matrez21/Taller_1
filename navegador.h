#include <string>
#include "software.h"
#include <vector>
using namespace std;

class Navegador : public Software {
private:
    vector<string> historialNavegacion;

public:
    // Constructor
    Navegador(string n,string dev,string edad, double p) : Software(n, dev, edad, p), historialNavegacion(10) {}
    
    Navegador() : Software(){}

    // Método para agregar una página al historial de navegación
    void agregarPagina(string pagina) {
        historialNavegacion.insert(historialNavegacion.begin(), pagina);
        if (historialNavegacion.size() > 10) {
            historialNavegacion.pop_back();
        }
    }

    // Método para mostrar el historial de navegación
    void mostrarHistorial(){
        Software::mostrarInformacion();
        cout << "Historial de Navegación:" << endl;
        for (string& pagina : historialNavegacion) {
            if (!pagina.empty()) {
                cout << "- " << pagina << endl;
            }
        }
    }
    
    void mostrarSoloHistorial(){
        Software::mostrarNombre();
        cout << "Historial de Navegación:" << endl;
        for (string& pagina : historialNavegacion) {
            if (!pagina.empty()) {
                cout << "- " << pagina << endl;
            }
        }
    }

    // Método para borrar el historial de navegación
    void borrarHistorial() {
        historialNavegacion.clear();
    }
    
    void mostrarUsuarios() const override {
        Software::mostrarUsuarios();
    }
};


