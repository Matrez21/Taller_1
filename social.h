#include "software.h"
#include "usuario.h"
#include <vector>
#include <map>
using namespace std;


class Social : public Software {
private:
    map<Usuario*,vector<Usuario*>> amigos;

public:
    // Constructor de la clase Social
    Social(string n, string dev, string edad, double p) : Software(n, dev, edad, p) {}
    
    Social() : Software(){}

    // Método para agregar un usuario como amigo de otro usuario
    void agregarAmigo(Usuario* usuario, Usuario* amigo) {
        amigos[usuario].push_back(amigo);
    }

    // Método para eliminar un usuario de la lista de amigos de otro usuario
    void eliminarAmigo(Usuario* usuario, Usuario* amigo) {
        auto it = find(amigos[usuario].begin(), amigos[usuario].end(), amigo);
        if (it != amigos[usuario].end()) {
            amigos[usuario].erase(it);
        }
    }

    void mostrarAmigos(){
        for (const auto& pair : amigos) {
            cout << "Amigos de " << pair.first->getNombre() << ": ";
            for (const auto& amigo : pair.second) {
                cout << amigo->getNombre() << " ";
            }
            cout << endl;
        }
    }
};

