#pragma once
#include "Aplicacion.hpp"
#include <string>
#include <vector>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class Tienda{
    string nombre;
    vector<Aplicacion*> aplicaciones;

    public:
        Tienda();
        Tienda(string);
        void crearAplicacion();
        void eliminarAplicacion();
};