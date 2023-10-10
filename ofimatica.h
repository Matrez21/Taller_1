using namespace std;
#include "software.h"
#include <map>

class Ofimatica : public Software{

private:
    map<string, int> archivosPorUsuario;    

public:

    Ofimatica() : Software(){}

    int cantArchivos;
    
    Ofimatica(string n,string dev,string edad, double p) : Software(n, dev, edad, p), cantArchivos(cantArchivos) {}
    
     void mostrarUsuarios() const override {
        Software::mostrarUsuarios();
    }
    
    void agregarArchivoUsuario(string nombreUsuario) {
        archivosPorUsuario[nombreUsuario]++;
    }

    
    void mostrarCantArchivosUser(string nombreUsuario) const {
        if (archivosPorUsuario.find(nombreUsuario) != archivosPorUsuario.end()) {
            cout << nombreUsuario << " archivos en " << nombre << ": "
                 << archivosPorUsuario.at(nombreUsuario) << endl;
        } else {
            cout << nombreUsuario << " archivos en " << nombre <<": 0" << endl;
        }
    }
    

};







