#include "Aplicacion.hpp"

Aplicacion::Aplicacion(){

}

Aplicacion::Aplicacion(int codigo, string nombre, string descripcion, string version, string fabricante, int precio){
    this->codigo = codigo;
    this->nombre = nombre;
    this->descripcion = descripcion;
    this->version = version;
    this->fabricante = fabricante;
    this->precio = precio;
}