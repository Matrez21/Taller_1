using namespace std;
#ifndef USUARIO_H
#define USUARIO_H

class Usuario {
public:
    string nombre;
    string contrasena;
    int edad;
    string correo;
    bool puedeAccederAlLog;
    

    Usuario(string n, string pass, int e, string c, bool logAcc);
    
    Usuario() {
    }
    
    void setNombre(string nom){  // Nombre
        nombre = nom;
    }
    string getNombre(){  
        return nombre;
    }
    
    void setContrasena(string contr){ // Contraseña
        contrasena = contr;
    }
    string getContrasena(){
        return contrasena;
    }
    
    void setEdad(int age){ //Edad
        edad = age;
    }
    int getEdad(){
        return edad;
    }
    
    void setCorreo(string mail){ //Correo
        correo = mail;
    }
    string getCorreo(){
        return correo;
    }
    
    void setAccLog(bool AccLog){ //Log acceso
        puedeAccederAlLog = AccLog;
    }
    bool getAccLog(){
        return puedeAccederAlLog;
    }
    
    void mostrarInformacion(){
    cout << "Nombre: " << nombre << endl;
    cout << "Contrasena: " << contrasena << endl;
    cout << "Edad: " << edad << endl;
    cout << "Correo: " << correo << endl;
    if(puedeAccederAlLog == true){
        cout << "Tipo usuario: " << "Admin" << endl;
    }else if(puedeAccederAlLog == false && edad >= 18){
        cout << "Tipo usuario: " << "Usuario Normal" << endl;
    }else if(puedeAccederAlLog == false && edad < 18){
        cout << "Tipo usuario: " << "Niño" << endl;
    }
}

};

Usuario::Usuario(string n, string pass, int e, string c, bool logAcc){
    nombre = n;
    contrasena = pass;
    edad = e;
    correo = c;
    puedeAccederAlLog = logAcc;
}




#endif