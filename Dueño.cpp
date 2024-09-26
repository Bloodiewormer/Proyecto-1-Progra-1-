#include "Due�o.h"
//Constructor por defecto
Due�o::Due�o()
{
	this->nombre = "";
	this->ID = "";
	this->mascotas = new MascotaContainer();
}
//Constructor que inicializa un due�o con nombre e ID
Due�o::Due�o(std::string nombre, std::string ID)
{
	this->nombre = nombre;
	this->ID = ID;
	this->mascotas = new MascotaContainer();

}
//Destructor que libera la memoria utilizada por el due�o
Due�o::~Due�o()
{
	delete this->mascotas;
}
//M�todo para agregar una mascota al due�o
bool Due�o::agregarMascota(Mascota* mascota)
{
	return this->mascotas->agregarMascota(mascota);
}
//M�todo para obtener una mascota por nombre
Mascota* Due�o::getMascota(std::string name)
{
	return this->mascotas->getMascota(name);
}
//M�todo que retorna el nombre del due�o
std::string Due�o::getNombre() const
{
	return this->nombre;
}
//M�todo que retorna el ID del due�o
std::string Due�o::getID() const
{
	return this->ID;
}
//M�todo que retorna una representaci�n en string del due�o
std::string Due�o::toString() const
{
	std::stringstream ss;
	ss << "Nombre: " << this->nombre << "\nID: " << this->ID << "\n";
	ss << "Mascotas: " << std::endl;
	ss << this->mascotas->toString();
	return ss.str();
}