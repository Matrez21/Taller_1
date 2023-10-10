using namespace std;
#ifndef SOFTWARE_H
#define SOFTWARE_H
#include "usuario.h"
#include <vector>

class Software{
    protected:
    string nombre;
    string desarrollador;
    string clasEdad;
    double precio;
public:

Software() {
    }
    
vector<Usuario*> listaUsuarios;

    void setNombre(string nom){  // Nombre
        nombre = nom;
    }
    string getNombre(){  
        return nombre;
    }
    
    void setDesarrollador(string deve){ // Desarrollador
        desarrollador = deve;
    }
    string getDesarrollador(){
        return desarrollador;
    }
    
    void setClasEdad(string age){ //Clasificacion de edad
        clasEdad = age;
    }
    string getClasEdad(){
        return clasEdad;
    }
    
    void setPrecio(double price){ //Precio
        precio = price;
    }
    double getPrecio(){
        return precio;
    }

    vector<Usuario*>& getListaUsuario(){
        return listaUsuarios;
    }

public:
Software(string n, string dev, string edad, double p);

virtual void mostrarInformacion() const {
        cout << "Nombre: " << nombre << endl;
        cout << "Developer: " << desarrollador << endl;
        cout << "Clasificación de Edad: " << clasEdad << endl;
        cout << "Precio: $" << precio << endl;

        
    }
    
virtual void mostrarUsuarios() const {
    cout << "Nombre: " << nombre << endl;
    for (auto& usuario : listaUsuarios) {
         cout<< "Usuario: " << usuario -> getNombre();
         cout << endl;
    }
}

virtual void mostrarNombre() const {
    cout << "Nombre: " << nombre << endl;
}

Usuario* encontrarUsuarioPorNombre(string& nombreUsuario) {
    for (auto& usuario : listaUsuarios) {
        if (usuario->getNombre() == nombreUsuario) {
            return usuario;
        }
    }
    return nullptr; 
}

};


Software::Software(string n,string dev,string edad, double p) {
        nombre = n;
        desarrollador = dev;
        clasEdad = edad;
        precio = p;
    }





#endif