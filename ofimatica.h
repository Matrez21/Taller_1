using namespace std;
#include "software.h"
#include <map>

class Ofimatica : public Software{

private:
    map<Usuario*, int> archivosPorUsuario;    

public:

    Ofimatica() : Software(){}
    
    Ofimatica(string n,string dev,string edad, double p) : Software(n, dev, edad, p) {}
    
     void mostrarUsuarios() const override {
        Software::mostrarUsuarios();
    }
    
    void agregarArchivoUsuario(Usuario* usuario) {
        archivosPorUsuario[usuario]++;
    }
    
    void eliminarArchivoUsuario(Usuario* usuario) {
        archivosPorUsuario[usuario]--;
    }

    
    void mostrarCantArchivosUser(Usuario* usuario) const {
        if (archivosPorUsuario.find(usuario) != archivosPorUsuario.end()) {
            cout << usuario -> getNombre() << " archivos en " << nombre << ": "
                 << archivosPorUsuario.at(usuario) << endl;
        } else {
            cout << usuario -> getNombre() << " archivos en " << nombre <<": 0" << endl;
        }
    }
    

};







