#pragma once
#include <iostream>
#include <sstream>
#include "Especialidad.h"
#include "Agenda.h"

class Doctor {
private:
    std::string nombre; // Nombre del doctor
    std::string ID; // ID del doctor
    Especialidad* especialidad; // Puntero a la especialidad del doctor
    Agenda* agenda; // Puntero a la agenda del doctor

public:
    // Constructor que inicializa un doctor con nombre, ID y especialidad
    Doctor(std::string nombre, std::string ID, Especialidad* especialidad);

    // Destructor que libera la memoria utilizada por el doctor
    virtual ~Doctor();

    // M�todo para agendar una cita en un d�a y hora espec�ficos
    bool agendarCita(Cita* cita, int dia, int hora);

    // M�todo para cancelar una cita en un d�a y hora espec�ficos
    bool cancelarCita(int dia, int hora);

    // M�todo que retorna el nombre del doctor
    std::string getNombre();

    // M�todo que retorna el ID del doctor
    std::string getID();

    // M�todo que retorna el puntero a la especialidad del doctor
    Especialidad* getEspecialidad();

    // M�todo que retorna el puntero a la agenda del doctor
    Agenda* getAgenda();

    // M�todo que retorna una representaci�n en string del doctor
    std::string toString() const;
};
