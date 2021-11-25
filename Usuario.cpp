#include "Usuario.hpp"

Usuario::Usuario(){

}

Usuario::Usuario(string nombre, string nombre_usuario, string password){
    this->nombre = nombre;
    this->nombre_usuario = nombre_usuario;
    this->password = password;
}

void Usuario::addAplicacion(Aplicacion* app){
    this->aplicaciones.push_back(app);
}

void Usuario::deleteAplicacion(){
    int p = 0;
    cout << "Ingrese la posicion de la app a eliminar" << endl;
    cin >> p;
    this->aplicaciones.erase(aplicaciones.begin() + p);
}