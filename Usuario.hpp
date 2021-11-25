#pragma once
#include <iostream>
#include "Aplicacion.hpp"
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Usuario{
    string nombre;
    string nombre_usuario;
    string password;
    vector<Aplicacion*> aplicaciones;

    public:
        Usuario();
        Usuario(string,string,string);
        void addAplicacion(Aplicacion*);
        void deleteAplicacion();
};