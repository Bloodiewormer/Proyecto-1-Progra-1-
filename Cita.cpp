#include "Cita.h"

Cita::Cita(Mascota* mascota, Dueño* dueño)
{
	this->mascota = mascota;
	this->dueño = dueño;
}

Cita::~Cita()
{
}

std::string Cita::getNombreMascota() const
{
	return this->mascota->getNombre();
}

std::string Cita::getNombreDueño() const
{
	return dueño->getNombre();
}

Dueño* Cita::getDueño() const
{
	return this->dueño;
}

Mascota* Cita::getMascota() const
{
	return this->mascota;
}

std::string Cita::toString() const
{
	std::stringstream ss;
	ss << "Cita:\n"
		<< mascota->toString() << "\n"
		<< dueño->toString() << "\n";
	return ss.str();
}