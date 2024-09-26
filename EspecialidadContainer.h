#pragma once
#include "Especialidad.h"
#include <iostream>
#include <sstream>

class EspecialidadContainer
{
private:
    Especialidad** especialidades; // Array de punteros a objetos Especialidad
    int can; // Número de especialidades en el contenedor
    int tam; // Capacidad del contenedor

public:
    EspecialidadContainer(); // Constructor
    ~EspecialidadContainer(); // Destructor

    // Agrega una especialidad al contenedor
    bool agregarEspecialidad(Especialidad* especialidad);

    // Obtiene una especialidad por su nombre
    Especialidad* getEspecialidad(std::string Name);

    // Retorna una representación en string del contenedor
    std::string toString();
};
