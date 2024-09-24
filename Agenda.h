#pragma once
#include <iostream>
#include "CitaContainer.h"

class Agenda {
private:
    CitaContainer* citas;
    int dias;
    int horas;
public:
    Agenda();
    ~Agenda();
    bool agendarCita(Cita* cita, int dia, int hora);
    bool cancelarCita(int dia, int hora);
    Cita* obtenerCita(int dia, int hora);
    std::string toString() const;
};
