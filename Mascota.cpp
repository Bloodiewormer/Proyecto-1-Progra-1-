#include "Mascota.h"
// Constructor por defecto
Mascota::Mascota()
{
	this->nombre = "";
	this->raza = "";
	this->especie = "";
	this->edad = 0;
}
// Constructor con parámetros
Mascota::Mascota(std::string nombre, std::string especie , std::string raza, int edad)
{
	this->nombre = nombre;
	this->raza = raza;
	this->especie = especie;
	this->edad = edad;
}
// Destructor
Mascota::~Mascota()
{
}
// Obtiene el nombre de la mascota
std::string Mascota::getNombre()
{
	return this->nombre;
}
// Obtiene la raza de la mascota
std::string Mascota::getRaza()
{
	return this->raza;
}
// Obtiene la especie de la mascota
std::string Mascota::getEspecie()
{
	return this->especie;
}
// Obtiene la edad de la mascota
int Mascota::getEdad()	const
{
	return this->edad;
}
// Retorna una representación en string de la mascota
std::string Mascota::toString()const
{
	std::stringstream ss;
	ss << "Nombre: " << this->nombre << "\nRaza: " << this->raza << "\nEspecie: " << this->especie << "\nEdad: " << this->edad;
	return ss.str();
}