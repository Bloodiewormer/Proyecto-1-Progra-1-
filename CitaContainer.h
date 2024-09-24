#pragma once
#include <iostream>
#include "Cita.h"

class CitaContainer {
private:
    Cita** citas;
    int cantidad;
    int capacidad;
public:
    CitaContainer(int capacidad);
    ~CitaContainer();
    bool agregarCita(Cita* cita, int index);
    bool cancelarCita(int index);
    Cita* obtenerCita(int index);
    std::string toString(int dias, int horas) const;
};