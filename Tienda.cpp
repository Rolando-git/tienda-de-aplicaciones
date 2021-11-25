#include "Tienda.hpp"

Tienda::Tienda(){

}

Tienda::Tienda(string nombre){
    this->nombre = nombre;
}

void Tienda::crearAplicacion(){
    int codigo = 0;
    string nombre;
    cout << "ingrese nombre de la app" << endl;
    cin >> nombre;
    string descripcion;
    cout << "descripcion de la app" << endl;
    cin >> descripcion;
    string version;
    cout << "version de la app" << endl;
    cin >> version;
    string fabricante;
    cout << "fabricante de la app" << endl;
    cin >> fabricante;
    int precio = 0;
    cout << "precio de la app" << endl;
    cin >> precio;
    Aplicacion* A = new Aplicacion(codigo,nombre,descripcion,version,fabricante,precio);
    this->aplicaciones.push_back(A);
    delete A;
}

void Tienda::eliminarAplicacion(){
    int p = 0;
    cout << "Ingrese la posicion de la app a eliminar" << endl;
    cin >> p;
    this->aplicaciones.erase(aplicaciones.begin() + p);
}