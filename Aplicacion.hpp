#pragma once
#include <string>
using std::string;

class Aplicacion{
    int codigo;
    string nombre;
    string descripcion;
    string version;
    string fabricante;
    int precio;

    public:
        Aplicacion();
        Aplicacion(int,string,string,string,string,int);
};