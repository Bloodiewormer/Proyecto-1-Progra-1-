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

    // Método para agendar una cita en un día y hora específicos
    bool agendarCita(Cita* cita, int dia, int hora);

    // Método para cancelar una cita en un día y hora específicos
    bool cancelarCita(int dia, int hora);

    // Método que retorna el nombre del doctor
    std::string getNombre();

    // Método que retorna el ID del doctor
    std::string getID();

    // Método que retorna el puntero a la especialidad del doctor
    Especialidad* getEspecialidad();

    // Método que retorna el puntero a la agenda del doctor
    Agenda* getAgenda();

    // Método que retorna una representación en string del doctor
    std::string toString() const;
};
