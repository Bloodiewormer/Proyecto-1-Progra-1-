#include "Due�o.h"

Due�o::Due�o()
{
	this->nombre = "";
	this->ID = "";
	this->mascotas = new MascotaContainer();
}

Due�o::Due�o(std::string nombre, std::string ID)
{
	this->nombre = nombre;
	this->ID = ID;
	this->mascotas = new MascotaContainer();

}

Due�o::~Due�o()
{
	delete this->mascotas;
}

bool Due�o::agregarMascota(Mascota* mascota)
{
	return this->mascotas->agregarMascota(mascota);
}

Mascota* Due�o::getMascota(std::string name)
{
	return this->mascotas->getMascota(name);
}

std::string Due�o::getNombre() const
{
	return this->nombre;
}

std::string Due�o::getID() const
{
	return this->ID;
}

std::string Due�o::toString() const
{
	std::stringstream ss;
	ss << "Nombre: " << this->nombre << "\nID: " << this->ID << "\n";
	ss << "Mascotas: " << std::endl;
	ss << this->mascotas->toString();
	return ss.str();
}