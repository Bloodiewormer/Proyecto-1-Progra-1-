#pragma once
#include "Mascota.h"
#include <iostream>
#include <sstream>

class MascotaContainer
{
private:
    Mascota** mascotas; // Array de punteros a Mascota
    int cantidad; // Número de mascotas en el contenedor
    int capacidad; // Capacidad del contenedor

public:
    MascotaContainer(); // Constructor
    ~MascotaContainer(); // Destructor

    int getCantidad() const; // Obtiene la cantidad de mascotas
    bool agregarMascota(Mascota* mascota); // Agrega una mascota al contenedor
    Mascota* getMascota(std::string name); // Obtiene una mascota por su nombre
    std::string toString(); // Retorna una representación en string del contenedor
};
