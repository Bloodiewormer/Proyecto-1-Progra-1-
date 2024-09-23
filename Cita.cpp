#include "Cita.h"

Cita::Cita(Mascota* mascota, Due�o* due�o)
{
	this->mascota = mascota;
	this->due�o = due�o;
}

Cita::~Cita()
{
}

std::string Cita::getNombreMascota() const
{
	return this->mascota->getNombre();
}

std::string Cita::getNombreDue�o() const
{
	return due�o->getNombre();
}

Due�o* Cita::getDue�o() const
{
	return this->due�o;
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
		<< due�o->toString() << "\n";
	return ss.str();
}