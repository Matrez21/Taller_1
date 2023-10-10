#include <iostream>
#include "usuario.h"
#include "juegos.h"
#include "ofimatica.h"
#include "produccion.h"
#include "navegador.h"
#include "seguridad.h"
#include "social.h"

using namespace std;

vector<Usuario> usuarios;
vector<Juegos> juegos;
vector<Ofimatica> ofimaticas;
vector<Produccion> produccion;
vector<Navegador> navegador;
vector<Seguridad> seguridad;
vector<Social> social;
vector<string> Juegos::generosUnicos;
vector<string> Produccion::solucionUnicas;
vector<string> Seguridad::malwareUnico;
string nombreUsuario, contrasena;


void agregarUserSoftware(){
    for (auto& juego : juegos) {
        for(int j = 0; j < usuarios.size();j++){
            juego.listaUsuarios.push_back(&usuarios[j]);
            cout << endl; 
        }
      
    }
    
    for (auto& ofimatica : ofimaticas) {
        for(int j = 0; j < usuarios.size();j++){
            ofimatica.listaUsuarios.push_back(&usuarios[j]);
            cout << endl; 
        }
    }
    
    for (auto& prod : produccion) {
        for(int j = 0; j < usuarios.size();j++){
            prod.listaUsuarios.push_back(&usuarios[j]);
            cout << endl; 
        }
    }
    
    for (auto& nave : navegador) {
        for(int j = 0; j < usuarios.size();j++){
            nave.listaUsuarios.push_back(&usuarios[j]);
            cout << endl; 
        }
    }
    
    for(int i = 0; i < navegador.size();i++){
        string nombreNavegador = navegador[i].getNombre();
        for(int j = 0; j < 10; j++){
            string nombrePagina = nombreNavegador + " Pagina " + to_string(j + 1);
            navegador[i].agregarPagina(nombrePagina);
        }
        
    }
    
    for (auto& seg : seguridad) {
        for(int j = 0; j < usuarios.size();j++){
            seg.listaUsuarios.push_back(&usuarios[j]);
            cout << endl; 
        }
    }
    
    for (auto& soc : social) {
        for(int j = 0; j < usuarios.size();j++){
            soc.listaUsuarios.push_back(&usuarios[j]);
            cout << endl; 
        }
    }
}


void cargar() {
        usuarios = {
        {"Maria", "MariaPass", 31, "maria@example.com", false},
        {"asd", "123", 31, "maria@example.com", false},
        {"Luisito", "Child123", 12, "luisito@example.com", false},
        {"Ana123", "AnaChild99", 15, "ana@example.com", false},
        {"David10", "DavidChild", 14, "david@example.com", false},
        {"Elena", "ElenaChild", 11, "elena@example.com", false},
        {"Carlos", "Carlos123", 20, "carlos@example.com", false},
        {"Laura", "Laura567", 22, "laura@example.com", false},
        {"Andres22", "AndresPass", 30, "andres@example.com", false},
        {"Monica", "MonyPass", 28, "monica@example.com", false},
        {"Roberto", "Roberto99", 19, "roberto@example.com", false},
        {"Sofia", "Sofia1234", 21, "sofia@example.com", false},
        {"Alejandro", "AlejoPass", 23, "alejandro@example.com", false},
        {"Isabel", "IsaPass123", 26, "isabel@example.com", false},
        {"Daniel", "DanPass567", 29, "daniel@example.com", false},
        {"Admin123", "AdminPass123", 25, "admin@example.com", true}
    };
    
    

      juegos = {
        {"Call of Duty: Modern Warfare", "Infinity Ward", "18+", 59.99, "FPS"},
        {"Overwatch", "Blizzard Entertainment", "12+", 0.00, "FPS"},
        {"World of Warcraft", "Blizzard Entertainment", "13+", 0.00, "MMO"},
        {"Final Fantasy XIV", "Square Enix", "13+", 19.99, "MMO"},
        {"Tetris", "Aleksei Pázhitnov", "6+", 8.00, "Puzzle"},
        {"Portal 2 ", "Valve Corporation", "10+", 9.99, "Puzzle"},
        {"Grand Theft Auto V", " Rockstar North", "18+", 39.99, "Aventura"},
        {"Uncharted 4: A Thief's End", "Naughty Dog", "16+", 39.99, "Aventura"},
        {"The Witcher 3: Wild Hunt", "CD Projekt", "16+", 11.99, "RPG"},
        {"Dark Souls III", "FromSoftware", "16+", 59.99, "RPG"},
        {"StarCraft II: Wings of Liberty", "Blizzard Entertainment", "13+", 0.00, "RTS"},
        {"Age of Empires II", "Ensemble Studios", "12+", 19.99, "RTS"},
        {"FIFA 22", "EA Sports", "3+", 59.99, "Deportes"},
        {"NBA 2K22", "2K Sports", "16+", 59.99, "Deportes"},
        {"Mortal Kombat 11", "NetherRealm Studios", "18+", 49.99, "Lucha"},
        {"Street Fighter V", "Capcom", "12+", 19.99, "Lucha"},
        {"Resident Evil 7: Biohazard", "Capcom", "18+", 19.99, "Survival Horror"},
        {"Outlast", "Red Barrels", "18+", 19.99, "Survival Horror"},
        {"Super Mario Odyssey", "Nintendo", "10+", 59.99, "Plataformas"},
        {"Celeste", "Infinity Ward", "10+", 19.99, "Plataformas"}
    };
    
    ofimaticas  = {
        {"WordPerfect Office", "Corel", "16+", 59.99},
        {"LibreOffice", "The Document Foundation", "14+", 0.00},
        {"WPS Office", "Kingsoft", "12+", 29.99},
        {"Google Workspace", "Google", "18+", 69.99},
        {"Zoho Office Suite", "Zoho Corporation", "10+", 39.99},
    };
    
    produccion = {
        {"VideoMax Pro", "Tech Visionaries", "18+", 4.99, "Video"},
        {"MusicVibe", "Sound Innovators", "18+", 3.99, "Música"},
        {"StreamX", "Stream Experts", "18+", 7.99, "Streaming"},
        {"FotoGenius", "Capture Masters", "18+", 2.99, "Fotografía"},
        {"CineFlicks", "Movie Buffs", "18+", 6.99, "Video"},
    };
    navegador = {
        {"Chrome", "Google", "6+", 0.00},
        {"Microsoft Edge", "Microsoft", "6+", 0.00},
    };
    
    
    
    
    
    seguridad = {
        {"RansomwareGuard", "SecureTech", "18+", 39.99, "Ransomware"},
        {"SpyShield Pro", "CyberDefender", "18+", 29.99, "Spyware"},
        {"BotnetBlocker", "NetSecurity Inc.", "18+", 49.99, "Botnets"},
        {"RootkitRemover", "SafeGuard Software", "18+", 34.99, "Rootkits"},
        {"WormDefender", "TechShield Labs", "18+", 44.99, "Gusanos"},
        {"TrojanGuard", "SecureSoft", "18+", 54.99, "Troyanos"},
    };

    social = {
        {"Social Network", "SocialDev", "18+", 0.00},
        {"Facebook", "Meta", "18+", 0.00},
    };

   
   
    agregarUserSoftware();

}

int mostrarMenu() {
    cout << "1. Agregar Software\n";
    cout << "2. Eliminar Software\n";
    cout << "3. Mostrar información de un software\n";
    cout << "4. Ver o usar Atributos unicos de los software\n";
    cout << "5. Logout del programa\n";
    cout << "Ingrese el número de la opción: ";

    int opcion;
    cin >> opcion;
    return opcion;
}

bool login() {

    
    cout << "Ingrese nombre de usuario: ";
    cin >> nombreUsuario;
    cout << "Ingrese contrasena: ";
    cin >> contrasena;

    for (auto& usuario : usuarios) {
        if (usuario.getNombre() == nombreUsuario && usuario.getContrasena() == contrasena) {
            return true;
        }
    }

    cout << "Credenciales incorrectas. Inténtelo de nuevo." << endl;
    return false;
}


void agregarSoftware(){
    int opcion;
    cout << "[1]Juegos" << endl;
    cout << "[2]Ofimatica" << endl;
    cout << "[3]Produccion" << endl;
    cout << "[4]Navegador" << endl;
    cout << "[5]Seguridad" << endl;
    cout << "[6]Social" << endl;
    cout << "Que tipo de software desea agregar?: " << endl;
    cin >> opcion;
    
    string nombreSoft,desarrolladorSoft,clasEdad;
    double precio;
    
    if(opcion == 1){
        string genero;
        cout << "Ingrese el nombre del Juego: " << endl;
        cin >> nombreSoft;
        cout << "Ingrese el desarrollador del Juego: " << endl;
        cin >> desarrolladorSoft;
        cout << "Ingrese la clasificacion de edad del Juego {Ej: 18+, 12+}: " << endl;
        cin >> clasEdad;
        cout << "Ingrese el precio del Juego: " << endl;
        cin >> precio;
        
        genero = Juegos::elegirGenero();
        
        Juegos nuevoJuego (nombreSoft,desarrolladorSoft,clasEdad,precio,genero);
        juegos.push_back(nuevoJuego);
        
    
        
    }else if(opcion == 2){
        cout << "Ingrese el nombre de la Ofimatica: " << endl;
        cin >> nombreSoft;
        cout << "Ingrese el desarrollador de la Ofimatica: " << endl;
        cin >> desarrolladorSoft;
        cout << "Ingrese la clasificacion de edad de la Ofimatica {Ej: 18+, 12+}: " << endl;
        cin >> clasEdad;
        cout << "Ingrese el precio de la Ofimatica: " << endl;
        cin >> precio;
        
        Ofimatica nuevaOfimatica (nombreSoft,desarrolladorSoft,clasEdad,precio);
        ofimaticas.push_back(nuevaOfimatica);
        
        
    }else if(opcion == 3){
        int opcionSolucion;
        string tipoSolucion;
        cout << "Ingrese el nombre de la Produccion: " << endl;
        cin >> nombreSoft;
        cout << "Ingrese el desarrollador de la Produccion: " << endl;
        cin >> desarrolladorSoft;
        clasEdad = "18+";
        cout << "Ingrese el precio de la Produccion: " << endl;
        cin >> precio;
        cout << "[1]Video" << endl;
        cout << "[2]Musica" << endl;
        cout << "[3]Streaming" << endl;
        cout << "[4]Fotos" << endl;
        cout << "Seleccione el tipo de Produccion: " << endl;
        cin >> opcionSolucion;
        
        if(opcionSolucion == 1){
            tipoSolucion = "Video";
        }else if(opcionSolucion == 2){
            tipoSolucion = "Musica";
        }else if(opcionSolucion == 3){
            tipoSolucion = "Streaming";
        }else if(opcionSolucion == 4){
            tipoSolucion = "Fotos";
        }
        
        Produccion nuevaProduccion (nombreSoft,desarrolladorSoft,clasEdad,precio,tipoSolucion);
        produccion.push_back(nuevaProduccion);
        
    }else if(opcion == 4){
        cout << "Ingrese el nombre del Navegador: " << endl;
        cin >> nombreSoft;
        cout << "Ingrese el desarrollador del Navegador: " << endl;
        cin >> desarrolladorSoft;
        cout << "Ingrese la clasificacion de edad del Navegador {Ej: 18+, 12+}: " << endl;
        cin >> clasEdad;
        cout << "Ingrese el precio del Navegador: " << endl;
        cin >> precio;
        
        Navegador nuevoNavegador (nombreSoft,desarrolladorSoft,clasEdad,precio);
        navegador.push_back(nuevoNavegador);
        
    }else if(opcion == 5){
        int opcionMalware;
        string tipoMalware;
        cout << "Ingrese el nombre del Software de Seguridad: " << endl;
        cin >> nombreSoft;
        cout << "Ingrese el desarrollador del Software de Seguridad: " << endl;
        cin >> desarrolladorSoft;
        cout << "Ingrese la clasificacion de edad del Software de Seguridad {Ej: 18+, 12+}: " << endl;
        cin >> clasEdad;
        cout << "Ingrese el precio del Software de Seguridad: " << endl;
        cin >> precio;
        cout << "[1]Ransomware" << endl;
        cout << "[2]Spyware" << endl;
        cout << "[3]Botnets" << endl;
        cout << "[4]Rootkits" << endl;
        cout << "[5]Gusanos" << endl;
        cout << "[6]Troyanos" << endl;
        cout << "Seleccione el tipo de Malware: " << endl;
        cin >> opcionMalware;
        
        if(opcionMalware == 1){
            tipoMalware = "Ransomware";
        }else if(opcionMalware == 2){
            tipoMalware = "Spyware";
        }else if(opcionMalware == 3){
            tipoMalware = "Botnets";
        }else if(opcionMalware == 4){
            tipoMalware = "Rootkits";
        }else if(opcionMalware == 5){
            tipoMalware = "Gusanos";
        }else if(opcionMalware == 6){
            tipoMalware = "Troyanos";
        }
        
        Seguridad nuevaSeguridad (nombreSoft,desarrolladorSoft,clasEdad,precio,tipoMalware);
        seguridad.push_back(nuevaSeguridad);
        
        
    }else if(opcion == 6){
        cout << "Ingrese el nombre del Software Social: " << endl;
        cin >> nombreSoft;
        cout << "Ingrese el desarrollador del Software Social: " << endl;
        cin >> desarrolladorSoft;
        cout << "Ingrese la clasificacion de edad del Software Social {Ej: 18+, 12+}: " << endl;
        cin >> clasEdad;
        cout << "Ingrese el precio del Software Social: " << endl;
        cin >> precio;
        
        Social nuevoSocial (nombreSoft,desarrolladorSoft,clasEdad,precio);
        social.push_back(nuevoSocial);
        
    }
}

void eliminarJuegoPorNombre(string& nombre) {
    
    auto it = find_if(juegos.begin(), juegos.end(), [&nombre](Juegos& juego) {
        return juego.getNombre() == nombre;
    });

    
    if (it != juegos.end()) {
        juegos.erase(it);
        cout << "Juego eliminado correctamente." << endl;
    } else {
        cout << "El juego no se encontró en la lista." << endl;
    }
}

void eliminarJuegoPorIndice(int indice){
    if (indice >= 1 && indice <= juegos.size()) {
            juegos.erase(juegos.begin() + indice - 1);
            cout << "Juego eliminado correctamente." << endl;
    } else {
        cout << "Número de juego no válido." << endl;
    }
}

void eliminarOfimaticaPorIndice(int indice) {
    if (indice >= 0 && indice < ofimaticas.size()) {
        ofimaticas.erase(ofimaticas.begin() + indice);
        cout << "Ofimatica eliminada correctamente." << endl;
    } else {
        cout << "Índice de ofimatica no válido." << endl;
    }
}

void eliminarProduccionPorIndice(int indice) {
    if (indice >= 0 && indice < produccion.size()) {
        produccion.erase(produccion.begin() + indice);
        cout << "Produccion eliminada correctamente." << endl;
    } else {
        cout << "Índice de produccion no válido." << endl;
    }
}

void eliminarNavegadorPorIndice(int indice) {
    if (indice >= 0 && indice < navegador.size()) {
        navegador.erase(navegador.begin() + indice);
        cout << "Navegador eliminado correctamente." << endl;
    } else {
        cout << "Índice de navegador no válido." << endl;
    }
}

void agregarPaginaNavegadorPorIndice(int indice){
    
}

void eliminarSeguridadPorIndice(int indice) {
    if (indice >= 0 && indice < seguridad.size()) {
        seguridad.erase(seguridad.begin() + indice);
        cout << "Software de Seguridad eliminado correctamente." << endl;
    } else {
        cout << "Índice de Software de Seguridad no válido." << endl;
    }
}

void eliminarSocialPorIndice(int indice) {
    if (indice >= 0 && indice < social.size()) {
        social.erase(social.begin() + indice);
        cout << "Software Social eliminado correctamente." << endl;
    } else {
        cout << "Índice de Software Social no válido." << endl;
    }
}

void eliminarSoftware(){
    int opcion;
    cout << "[1]Juegos" << endl;
    cout << "[2]Ofimatica" << endl;
    cout << "[3]Produccion" << endl;
    cout << "[4]Navegador" << endl;
    cout << "[5]Seguridad" << endl;
    cout << "[6]Social" << endl;
    cout << "Que tipo de software desea eliminar?: " << endl;
    cin >> opcion;
    
    if(opcion == 1){
        int indiceAEliminar;
        
        cout << "Lista de juegos:" << endl;
        for (int i = 0; i < juegos.size(); ++i) {
        cout << i + 1 << ". " << juegos[i].getNombre() << endl;
        }
        
        cout << "Ingrese el número del juego que desea eliminar: ";
        cin >> indiceAEliminar;
        
        int permiso;
        cout << "[1]Si" << endl;
        cout << "[2]No" << endl;
        cout << "Permiso de todos los usuarios para borrar el software?: " << endl;
        cin  >> permiso;
        if(permiso == 1){
        eliminarJuegoPorIndice(indiceAEliminar - 1);    
        }
        
    }else if(opcion == 2){
        int indiceAEliminar;
        cout << "Lista de ofimaticas:" << endl;
        for (int i = 0; i < ofimaticas.size(); ++i) {
            cout << i + 1 << ". " << ofimaticas[i].getNombre() << endl;
        }
        cout << "Ingrese el número de la ofimatica que desea eliminar: ";
        cin >> indiceAEliminar;
        int permiso;
        cout << "[1]Si" << endl;
        cout << "[2]No" << endl;
        cout << "Permiso de todos los usuarios para borrar el software?: " << endl;
        cin  >> permiso;
        if(permiso == 1){
        eliminarOfimaticaPorIndice(indiceAEliminar - 1);
        }
    }else if(opcion == 3){
        int indiceAEliminar;
        cout << "Lista de Producciones:" << endl;
        for (int i = 0; i < produccion.size(); ++i) {
            cout << i + 1 << ". " << produccion[i].getNombre() << endl;
        }
        cout << "Ingrese el número de la produccion que desea eliminar: ";
        cin >> indiceAEliminar;
        
        int permiso;
        cout << "[1]Si" << endl;
        cout << "[2]No" << endl;
        cout << "Permiso de todos los usuarios para borrar el software?: " << endl;
        cin  >> permiso;
        if(permiso == 1){
        eliminarProduccionPorIndice(indiceAEliminar - 1);
        }
    }else if(opcion == 4){
        int indiceAEliminar;
        cout << "Lista de Navegadores:" << endl;
        for (int i = 0; i < navegador.size(); ++i) {
            cout << i + 1 << ". " << navegador[i].getNombre() << endl;
        }
        cout << "Ingrese el número del navegador que desea eliminar: ";
        cin >> indiceAEliminar;
        
        int permiso;
        cout << "[1]Si" << endl;
        cout << "[2]No" << endl;
        cout << "Permiso de todos los usuarios para borrar el software?: " << endl;
        cin  >> permiso;
        if(permiso == 1){
        eliminarNavegadorPorIndice(indiceAEliminar - 1);
        }
    }else if(opcion == 5){
        int indiceAEliminar;
        cout << "Lista de Software de Seguridad:" << endl;
        for (int i = 0; i < seguridad.size(); ++i) {
            cout << i + 1 << ". " << seguridad[i].getNombre() << endl;
        }
        cout << "Ingrese el número del Software de Seguridad que desea eliminar: ";
        cin >> indiceAEliminar;
        
        int permiso;
        cout << "[1]Si" << endl;
        cout << "[2]No" << endl;
        cout << "Permiso de todos los usuarios para borrar el software?: " << endl;
        cin  >> permiso;
        if(permiso == 1){
        eliminarSeguridadPorIndice(indiceAEliminar - 1);
        }
    }else if(opcion == 6){
        int indiceAEliminar;
        cout << "Lista de Software Social:" << endl;
        for (int i = 0; i < social.size(); ++i) {
            cout << i + 1 << ". " << social[i].getNombre() << endl;
        }
        cout << "Ingrese el número del Software Social que desea eliminar: ";
        cin >> indiceAEliminar;
        
        int permiso;
        cout << "[1]Si" << endl;
        cout << "[2]No" << endl;
        cout << "Permiso de todos los usuarios para borrar el software?: " << endl;
        cin  >> permiso;
        if(permiso == 1){
        eliminarSocialPorIndice(indiceAEliminar - 1);
        }
    }
}

Usuario* obtenerUsuarioPorNombre(string& nombre) {
    for (Usuario& usuario : usuarios) {
        if (usuario.getNombre() == nombre) {
            return &usuario;
        }
    }
    return nullptr;  
}

void mostrarInfoSoftware() {
    int opcion;
    cout << "[1]Juegos" << endl;
    cout << "[2]Ofimatica" << endl;
    cout << "[3]Produccion" << endl;
    cout << "[4]Navegador" << endl;
    cout << "[5]Seguridad" << endl;
    cout << "[6]Social" << endl;
    cout << "Que tipo de software desea ver?: " << endl;
    cin >> opcion;
    
    Usuario* us = obtenerUsuarioPorNombre(nombreUsuario);
    
    if(opcion == 1){
        
    for (auto& juego : juegos) {
        juego.mostrarInformacion();
        cout <<"---------------" <<endl;
    }   
    }else if(opcion == 2){
        for (auto& ofimatica : ofimaticas) {
            ofimatica.mostrarInformacion();
            ofimatica.mostrarCantArchivosUser(us);
            cout <<"---------------" <<endl;
        }
    }else if(opcion == 3){
        for (auto& prod : produccion) {
            prod.mostrarInformacion();
            cout <<"---------------" <<endl;
        }  
    }else if(opcion == 4){
        for (auto& nave : navegador) {
            nave.mostrarHistorial();
            cout <<"---------------" <<endl;
        }  
    }else if(opcion == 5){
        for (auto& seg : seguridad) {
            seg.mostrarInformacion();
            cout <<"---------------" <<endl;
        } 
    }else if(opcion == 6){
        for (auto& soc : social) {
            soc.mostrarInformacion();
            cout <<"---------------" <<endl;
        }
    }
}

bool logout(){
    int opcion;
    cout << "[1]Iniciar sesion con otro usuario" << endl;
    cout << "[2]Terminar el programa" << endl;
    cout << "Seleccione una opcion: " << endl;
    cin >> opcion;
    
    if(opcion == 1){
        return false;
    }else if (opcion == 2){
        cout << "Cerrando el programa" << endl;
        return true;
    }else{
        cout << "Opcion incorrecta, terminando el programa igualmente" << endl;
        return true;
    }
    
}

int obtenerEdadPorNombre(string& nombre) {
    for (Usuario& usuario : usuarios) {
        if (usuario.getNombre() == nombre) {
            return usuario.getEdad();
        }
    }
    return -1;  
}


Navegador* obtenerNavegadorPorIndice(){
        int indiceNav;
        cout << "Lista de Navegadores:" << endl;
        for (int i = 0; i < navegador.size(); ++i) {
            cout <<"[" <<i + 1 << "]. " << navegador[i].getNombre() << endl;
            
        }
        cout << "Ingrese el número del navegador: ";
        cin >> indiceNav; 
        int indice = indiceNav - 1;
    return &navegador[indice];
}

Social* obtenerSocialPorIndice(){
        int indiceSoc;
        cout << "Lista de Softwares Sociales:" << endl;
        for (int i = 0; i < social.size(); ++i) {
            cout <<"[" <<i + 1 << "]. " << social[i].getNombre() << endl;
            
        }
        cout << "Ingrese el número del Software social: ";
        cin >> indiceSoc; 
        int indice = indiceSoc - 1;
    return &social[indice];
}

Usuario* obtenerUsuarioPorIndice(){
        int indiceUs;
        cout << "Lista de Usuarios:" << endl;
        for (int i = 0; i < usuarios.size(); ++i) {
            cout <<"[" <<i + 1 << "]. " << usuarios[i].getNombre() << endl;
            
        }
        cout << "Ingrese el número del Usuario: ";
        cin >> indiceUs; 
        int indice = indiceUs - 1;
    return &usuarios[indice];
}

Ofimatica* obtenerOfimaticaPorIndice(){
        int indiceOf;
        cout << "Lista de Ofimaticas:" << endl;
        for (int i = 0; i < ofimaticas.size(); ++i) {
            cout <<"[" <<i + 1 << "]. " << ofimaticas[i].getNombre() << endl;
            
        }
        cout << "Ingrese el número de la Ofimatica: ";
        cin >> indiceOf; 
        int indice = indiceOf - 1;
    return &ofimaticas[indice];
}

string ingresoEliminarAmigo(){
    string nombreEliminarAmigo;
    cout << "Ingrese el nombre del amigo que desea eliminar (Incluyendo las MAYUS del nombre): " << endl;
    cin >> nombreEliminarAmigo;
    return nombreEliminarAmigo;
}

bool verificarAdmin(string& nombre) {
    for (Usuario& usuario : usuarios) {
        if (usuario.getNombre() == nombre) {
            if(usuario.getAccLog() == true){
                return true;
            }
        }
    }
    return false;  
}

void atributosUnicos(){
    int opcion;
    cout << "[1]Juegos" << endl;
    cout << "[2]Ofimatica" << endl;
    cout << "[3]Produccion" << endl;
    cout << "[4]Navegador" << endl;
    cout << "[5]Seguridad" << endl;
    cout << "[6]Social" << endl;
    cout << "Que tipo de software desea ver/usar sus atributos unicos?: " << endl;
    cin >> opcion;
    
    if(opcion == 1){
        int opcionGenero;
        Juegos::mostrarGenerosUnicos();
        cout << "[1]Si" << endl;
        cout << "[2]No (Borrar un Genero)" << endl;
        cout << "[3]Salir" << endl;
        cout << "Desea crear un nuevo genero?: " << endl;
        cin >> opcionGenero;
        
        if(opcionGenero == 1){
            string nuevoGenero;
            cout << "Escriba el nombre del genero nuevo: " << endl;
            cin >> nuevoGenero;
            
            Juegos::agregarGenero(nuevoGenero);
            
        }else if(opcionGenero == 2){
            Juegos::eliminarGenero();
            
            
        }
        
    }else if(opcion == 2){

        int opcionOfim;
        cout << "[1]Añadir Archivos" << endl;
        cout << "[2]Borrar Archivos" << endl;
        cout << "[3]Mostrar Cantidad de Archivos" << endl;
        cout << "[4]Salir" << endl;
        cout << "Desea añadir archivos?: " << endl;
        cin >> opcionOfim;
        
        Usuario* us = obtenerUsuarioPorNombre(nombreUsuario);
        
        if(opcionOfim == 1){
            
           Ofimatica* of = obtenerOfimaticaPorIndice();
           
           of -> agregarArchivoUsuario(us);
           
           cout << " Archivo agregado exitosamente" << endl;
        
        
        }else if(opcionOfim == 2){
            
           Ofimatica* of = obtenerOfimaticaPorIndice();
           
           of -> eliminarArchivoUsuario(us);
           
           cout << " Archivo eliminado exitosamente" << endl;
           
        }else if(opcionOfim == 3){
           Ofimatica* of = obtenerOfimaticaPorIndice();
           of -> mostrarCantArchivosUser(us);
        }   
    }else if(opcion == 3){
        int edad = obtenerEdadPorNombre(nombreUsuario);
        if(edad > 18){
            int opcionSol;
            Produccion::mostrarSolucionesUnicas();
            cout << "[1]Añadir Tipo de solucion" << endl;
            cout << "[2]Eliminar Tipo de solucion" << endl;
            cout << "[3]Salir" << endl;
            cout << "Seleccione una opcion: " << endl;
            cin >> opcionSol;
        
        if(opcionSol == 1){
            string nuevaSolucion;
            cout << "Ingrese el nombre de la nueva solucion: " << endl;
            cin >> nuevaSolucion;
            Produccion::agregarSolucion(nuevaSolucion);
        }else if(opcionSol == 2){
            Produccion::eliminarSolucion();
        }
        }else{
            cout << "----Acceso restringido----" << endl;
            cout << nombreUsuario << " es menor de edad" << endl;
        }
        
        
    }else if(opcion == 4){
        int opcionNave;
        cout << "[1]Agregar una pagina a un navegador" << endl;
        cout << "[2]Eliminar el historial de un navegador" << endl;
        cout << "[3]Mostrar el historial" << endl;
        cout << "[4]Salir" << endl;
        cin >> opcionNave;
        
        if (opcionNave == 1){
            Navegador* nave = obtenerNavegadorPorIndice();
            string nombrePag;
            cout << "Ingrese el nombre de la pagina que desea agregar: " << endl;
            cin >> nombrePag;
            nave -> agregarPagina(nombrePag);
            cout << nombrePag << " Agregado exitosamente" << endl;
        
        }else if(opcionNave == 2){
            Navegador* nave = obtenerNavegadorPorIndice();
            nave -> borrarHistorial();
            
            cout << "Historial de " << nave -> getNombre() << " Eliminado exitosamente" << endl;
        }else if(opcionNave == 3){
            for(auto& nave: navegador){
                nave.mostrarSoloHistorial();
            }
        }
            
        
        
        
    }else if(opcion == 5){
        bool verifAdmin = verificarAdmin(nombreUsuario);
        if(verifAdmin){
            int opcionMal;
            Seguridad::mostrarMalwaresUnicos();
            cout << "[1]Añadir Malware" << endl;
            cout << "[2]Eliminar Malware" << endl;
            cout << "[3]Salir" << endl;
            cout << "Seleccione una opcion: " << endl;
            cin >> opcionMal;
            
            if(opcionMal == 1){
                string nuevoMalware;
                cout << "Ingrese el nombre del nuevo Malware: " << endl;
                cin >> nuevoMalware;
                Seguridad::agregarMalware(nuevoMalware);
            }else if(opcionMal == 2){
                Seguridad::eliminarMalware();
            }
        }else{
            cout << "----Acceso restringido----" << endl;
            cout << nombreUsuario << " no es administrador" << endl;
        }
        
    }else if(opcion == 6){
        int opcionSoc;
        cout << "[1]Agregar un amigo" << endl;
        cout << "[2]Eliminar un amigo" << endl;
        cout << "[3]Mostrar los amigos" << endl;
        cout << "[4]Salir" << endl;
        cin >> opcionSoc;
        
        Usuario* us = obtenerUsuarioPorNombre(nombreUsuario);
        
        if(opcionSoc == 1){
            Social* soc = obtenerSocialPorIndice();
            Usuario* amigo = obtenerUsuarioPorIndice();
            
            soc -> agregarAmigo(us,amigo);
            
            cout << amigo -> getNombre() << " Agregado exitosamente" << endl;
        }else if(opcionSoc == 2){
            Social* soc = obtenerSocialPorIndice();
    
            soc -> mostrarAmigos();
            
            string nombreAm = ingresoEliminarAmigo();
            Usuario* amigo = obtenerUsuarioPorNombre(nombreAm);
            
            soc -> eliminarAmigo(us,amigo);
            
            cout << amigo -> getNombre() << " Eliminado exitosamente" << endl;
            
        }else if(opcionSoc == 3){
            Social* soc = obtenerSocialPorIndice();
            soc -> mostrarAmigos();
        }
        
        
    }

}

int main() {
    bool loggedIn = false;
    do {
        cargar();

        
        while (!loggedIn) {
            loggedIn = login();
            if (!loggedIn) {
                cout << "Por favor, vuelva a iniciar sesión." << endl;
            }
        }

        int opcion = 0;
        do {
            opcion = mostrarMenu();
            switch (opcion) {
                case 1:
                    agregarSoftware();
                    break;
                case 2:
                    eliminarSoftware();
                    break;
                case 3:
                    mostrarInfoSoftware();
                    break;
                case 4:
                    atributosUnicos();
                    break;
                case 5:
                    loggedIn = logout();
                    break;
            }
        } while (opcion != 5);

    } while (!loggedIn);

    return 0;
}




    


