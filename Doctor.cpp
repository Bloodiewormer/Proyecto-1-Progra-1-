#include "Doctor.h"

// Constructor de la clase Doctor
// Inicializa un doctor con nombre, ID y especialidad
Doctor::Doctor(std::string nombre, std::string ID, Especialidad* especialidad)
{
    this->nombre = nombre;
    this->ID = ID;
    this->especialidad = especialidad;
    // Crea e inicializa la agenda
    this->agenda = new Agenda(72);
}

// Destructor de la clase Doctor
Doctor::~Doctor()
{
    delete this->agenda;
}

// Agenda una cita para el doctor en un día y hora específicos
bool Doctor::agendarCita(Cita* cita, int dia, int hora)
{
    return this->agenda->agendarCita(cita, dia, hora);
}

// Cancela una cita para el doctor en un día y hora específicos
bool Doctor::cancelarCita(int dia, int hora)
{
    return this->agenda->cancelarCita(dia, hora);
}

// Obtiene el nombre del doctor
std::string Doctor::getNombre()
{
    return this->nombre;
}

// Obtiene el ID del doctor
std::string Doctor::getID()
{
    return this->ID;
}

// Obtiene la especialidad del doctor
Especialidad* Doctor::getEspecialidad()
{
    return this->especialidad;
}

// Obtiene la agenda del doctor
Agenda* Doctor::getAgenda()
{
    return this->agenda;
}

// Convierte la información del doctor a una cadena de texto
std::string Doctor::toString() const
{
    std::stringstream ss;
    ss << "Nombre: " << this->nombre << "\nID: " << this->ID << "\nEspecialidad: " << this->especialidad->getNombre();
    return ss.str();
}
