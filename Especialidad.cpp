#include "Especialidad.h"
// Constructor con par�metros
Especialidad::Especialidad(std::string nombre)
{
	this->nombre = nombre;
}
// Destructor
Especialidad::~Especialidad()
{
}
// Obtiene el nombre de la especialidad
std::string Especialidad::getNombre()
{
	return this->nombre;
}
// Retorna una representaci�n en string de la especialidad
std::string Especialidad::toString()const
{
	std::stringstream ss;
	ss << "Nombre: " << this->nombre;
	return ss.str();
}

