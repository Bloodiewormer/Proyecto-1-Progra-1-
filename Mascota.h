#pragma once
#include <iostream>
#include <sstream>

class Mascota
{
private:
    std::string nombre; // Nombre de la mascota
    std::string raza; // Raza de la mascota
    std::string especie; // Especie de la mascota
    int edad; // Edad de la mascota

public:
    Mascota(); // Constructor por defecto
    Mascota(std::string nombre, std::string especie, std::string raza, int edad); // Constructor con parámetros
    ~Mascota(); // Destructor

    // Obtiene el nombre de la mascota
    std::string getNombre();

    // Obtiene la raza de la mascota
    std::string getRaza();

    // Obtiene la especie de la mascota
    std::string getEspecie();

    // Obtiene la edad de la mascota
    int getEdad() const;

    // Retorna una representación en string de la mascota
    std::string toString() const;
};
