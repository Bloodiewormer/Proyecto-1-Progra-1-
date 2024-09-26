#include "Cita.h"

// Constructor de la clase Cita
// Inicializa una cita con una mascota y un due�o
Cita::Cita(Mascota* mascota, Due�o* due�o)
{
    this->mascota = mascota;
    this->due�o = due�o;
}

// Destructor de la clase Cita
Cita::~Cita()
{
}

// Obtiene el nombre de la mascota asociada a la cita
std::string Cita::getNombreMascota() const
{
    return this->mascota->getNombre();
}

// Obtiene el nombre del due�o asociado a la cita
std::string Cita::getNombreDue�o() const
{
    return due�o->getNombre();
}

// Obtiene el due�o asociado a la cita
Due�o* Cita::getDue�o() const
{
    return this->due�o;
}

// Obtiene la mascota asociada a la cita
Mascota* Cita::getMascota() const
{
    return this->mascota;
}

// Convierte la informaci�n de la cita a una cadena de texto
std::string Cita::toString() const
{
    std::stringstream ss;
    ss << "Cita:\n"
        << mascota->toString() << "\n"
        << due�o->toString() << "\n";
    return ss.str();
}
