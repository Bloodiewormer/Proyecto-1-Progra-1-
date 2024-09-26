#pragma once
#include "Dueño.h"

class DueñoContainer
{
private:
    Dueño** dueños; // Array de punteros a objetos Dueño
    int cantidad; // Número de dueños en el contenedor
    int capacidad; // Capacidad del contenedor

public:
    DueñoContainer(); // Constructor
    ~DueñoContainer(); // Destructor

    // Agrega un dueño al contenedor
    bool agregarDueño(Dueño* dueño);

    // Obtiene un dueño por su ID
    Dueño* getDueño(std::string ID);

    // Retorna una representación en string del contenedor
    std::string toString() const;
};
