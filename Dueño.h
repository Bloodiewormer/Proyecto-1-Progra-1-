#pragma once
#include "MascotaContainer.h"
#include <iostream>
#include <sstream>

class Dueño {
private:
    std::string nombre; // Nombre del dueño
    std::string ID; // ID del dueño
    MascotaContainer* mascotas; // Puntero al contenedor de mascotas del dueño

public:
    // Constructor por defecto
    Dueño();

    // Constructor que inicializa un dueño con nombre e ID
    Dueño(std::string nombre, std::string ID);

    // Destructor que libera la memoria utilizada por el dueño
    ~Dueño();

    // Método para agregar una mascota al dueño
    bool agregarMascota(Mascota* mascota);

    // Método para obtener una mascota por nombre
    Mascota* getMascota(std::string name);

    // Método que retorna el nombre del dueño
    std::string getNombre() const;

    // Método que retorna el ID del dueño
    std::string getID() const;

    // Método que retorna una representación en string del dueño
    std::string toString() const;
};
