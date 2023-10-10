#include "software.h"
#include "usuario.h"
#include <vector>

using namespace std;

class Social : public Software {

public:
    // Constructor de la clase Social
    Social(string n, string dev, string edad, double p) : Software(n, dev, edad, p), cantidadAmigos(cantidadAmigos) {}

    Social() : Software(){}

    
    void mostrarUsuarios() const override {
        Software::mostrarUsuarios();
    }
};

