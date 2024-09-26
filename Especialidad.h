#pragma once
#include <iostream>
#include <sstream>

class Especialidad
{
private:
    std::string nombre; // Nombre de la especialidad

public:
    Especialidad(std::string nombre); // Constructor con parámetros
    virtual ~Especialidad(); // Destructor

    // Obtiene el nombre de la especialidad
    std::string getNombre();

    // Retorna una representación en string de la especialidad
    std::string toString() const;
};
