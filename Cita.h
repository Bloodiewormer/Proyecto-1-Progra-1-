#pragma once
#include <iostream>
#include <sstream>
#include "Mascota.h"
#include "Due�o.h"

class Cita {
private:
    Mascota* mascota; // Puntero a la mascota de la cita
    Due�o* due�o; // Puntero al due�o de la mascota

public:
    // Constructor que inicializa una cita con una mascota y un due�o
    Cita(Mascota* mascota, Due�o* due�o);

    // Destructor que libera la memoria utilizada por la cita
    virtual ~Cita();

    // M�todo que retorna el nombre de la mascota
    std::string getNombreMascota() const;

    // M�todo que retorna el nombre del due�o
    std::string getNombreDue�o() const;

    // M�todo que retorna el puntero al due�o
    Due�o* getDue�o() const;

    // M�todo que retorna el puntero a la mascota
    Mascota* getMascota() const;

    // M�todo que retorna una representaci�n en string de la cita
    std::string toString() const;
};
