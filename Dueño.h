#pragma once
#include "MascotaContainer.h"
#include <iostream>
#include <sstream>

class Due�o {
private:
    std::string nombre; // Nombre del due�o
    std::string ID; // ID del due�o
    MascotaContainer* mascotas; // Puntero al contenedor de mascotas del due�o

public:
    // Constructor por defecto
    Due�o();

    // Constructor que inicializa un due�o con nombre e ID
    Due�o(std::string nombre, std::string ID);

    // Destructor que libera la memoria utilizada por el due�o
    ~Due�o();

    // M�todo para agregar una mascota al due�o
    bool agregarMascota(Mascota* mascota);

    // M�todo para obtener una mascota por nombre
    Mascota* getMascota(std::string name);

    // M�todo que retorna el nombre del due�o
    std::string getNombre() const;

    // M�todo que retorna el ID del due�o
    std::string getID() const;

    // M�todo que retorna una representaci�n en string del due�o
    std::string toString() const;
};
