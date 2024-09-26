#pragma once
#include <iostream>
#include <sstream>
#include "Mascota.h"
#include "Dueño.h"

class Cita {
private:
    Mascota* mascota; // Puntero a la mascota de la cita
    Dueño* dueño; // Puntero al dueño de la mascota

public:
    // Constructor que inicializa una cita con una mascota y un dueño
    Cita(Mascota* mascota, Dueño* dueño);

    // Destructor que libera la memoria utilizada por la cita
    virtual ~Cita();

    // Método que retorna el nombre de la mascota
    std::string getNombreMascota() const;

    // Método que retorna el nombre del dueño
    std::string getNombreDueño() const;

    // Método que retorna el puntero al dueño
    Dueño* getDueño() const;

    // Método que retorna el puntero a la mascota
    Mascota* getMascota() const;

    // Método que retorna una representación en string de la cita
    std::string toString() const;
};
