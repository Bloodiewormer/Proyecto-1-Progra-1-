#pragma once
#include "Due�o.h"

class Due�oContainer
{
private:
    Due�o** due�os; // Array de punteros a objetos Due�o
    int cantidad; // N�mero de due�os en el contenedor
    int capacidad; // Capacidad del contenedor

public:
    Due�oContainer(); // Constructor
    ~Due�oContainer(); // Destructor

    // Agrega un due�o al contenedor
    bool agregarDue�o(Due�o* due�o);

    // Obtiene un due�o por su ID
    Due�o* getDue�o(std::string ID);

    // Retorna una representaci�n en string del contenedor
    std::string toString() const;
};
