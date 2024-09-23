#include "Dueño.h"

Dueño::Dueño()
{
	this->nombre = "";
	this->ID = "";
	this->mascotas = new MascotaContainer();
}

Dueño::Dueño(std::string nombre, std::string ID)
{
	this->nombre = nombre;
	this->ID = ID;
	this->mascotas = new MascotaContainer();

}

Dueño::~Dueño()
{
	delete this->mascotas;
}

bool Dueño::agregarMascota(Mascota* mascota)
{
	return this->mascotas->agregarMascota(mascota);
}

Mascota* Dueño::getMascota(std::string name)
{
	return this->mascotas->getMascota(name);
}

std::string Dueño::getNombre() const
{
	return this->nombre;
}

std::string Dueño::getID() const
{
	return this->ID;
}

std::string Dueño::toString() const
{
	std::stringstream ss;
	ss << "Nombre: " << this->nombre << "\nID: " << this->ID << "\n";
	ss << "Mascotas: " << std::endl;
	ss << this->mascotas->toString();
	return ss.str();
}