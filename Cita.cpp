#include "Cita.h"

// Constructor de la clase Cita
// Inicializa una cita con una mascota y un dueño
Cita::Cita(Mascota* mascota, Dueño* dueño)
{
    this->mascota = mascota;
    this->dueño = dueño;
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

// Obtiene el nombre del dueño asociado a la cita
std::string Cita::getNombreDueño() const
{
    return dueño->getNombre();
}

// Obtiene el dueño asociado a la cita
Dueño* Cita::getDueño() const
{
    return this->dueño;
}

// Obtiene la mascota asociada a la cita
Mascota* Cita::getMascota() const
{
    return this->mascota;
}

// Convierte la información de la cita a una cadena de texto
std::string Cita::toString() const
{
    std::stringstream ss;
    ss << "Cita:\n"
        << mascota->toString() << "\n"
        << dueño->toString() << "\n";
    return ss.str();
}
