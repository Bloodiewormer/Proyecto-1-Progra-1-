#include "Mascota.h"

Mascota::Mascota()
{
	this->nombre = "";
	this->raza = "";
	this->especie = "";
	this->edad = 0;
}

Mascota::Mascota(std::string nombre, std::string especie , std::string raza, int edad)
{
	this->nombre = nombre;
	this->raza = raza;
	this->especie = especie;
	this->edad = edad;
}

Mascota::~Mascota()
{
}

std::string Mascota::getNombre()
{
	return this->nombre;
}

std::string Mascota::getRaza()
{
	return this->raza;
}

std::string Mascota::getEspecie()
{
	return this->especie;
}

int Mascota::getEdad()	const
{
	return this->edad;
}

std::string Mascota::toString()const
{
	std::stringstream ss;
	ss << "Nombre: " << this->nombre << "\nRaza: " << this->raza << "\nEspecie: " << this->especie << "\nEdad: " << this->edad;
	return ss.str();
}