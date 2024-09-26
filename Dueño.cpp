#include "Dueño.h"
//Constructor por defecto
Dueño::Dueño()
{
	this->nombre = "";
	this->ID = "";
	this->mascotas = new MascotaContainer();
}
//Constructor que inicializa un dueño con nombre e ID
Dueño::Dueño(std::string nombre, std::string ID)
{
	this->nombre = nombre;
	this->ID = ID;
	this->mascotas = new MascotaContainer();

}
//Destructor que libera la memoria utilizada por el dueño
Dueño::~Dueño()
{
	delete this->mascotas;
}
//Método para agregar una mascota al dueño
bool Dueño::agregarMascota(Mascota* mascota)
{
	return this->mascotas->agregarMascota(mascota);
}
//Método para obtener una mascota por nombre
Mascota* Dueño::getMascota(std::string name)
{
	return this->mascotas->getMascota(name);
}
//Método que retorna el nombre del dueño
std::string Dueño::getNombre() const
{
	return this->nombre;
}
//Método que retorna el ID del dueño
std::string Dueño::getID() const
{
	return this->ID;
}
//Método que retorna una representación en string del dueño
std::string Dueño::toString() const
{
	std::stringstream ss;
	ss << "Nombre: " << this->nombre << "\nID: " << this->ID << "\n";
	ss << "Mascotas: " << std::endl;
	ss << this->mascotas->toString();
	return ss.str();
}