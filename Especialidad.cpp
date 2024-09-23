#include "Especialidad.h"

Especialidad::Especialidad(std::string nombre)
{
	this->nombre = nombre;
}

Especialidad::~Especialidad()
{
}

std::string Especialidad::getNombre()
{
	return this->nombre;
}

std::string Especialidad::toString()const
{
	std::stringstream ss;
	ss << "Nombre: " << this->nombre;
	return ss.str();
}

