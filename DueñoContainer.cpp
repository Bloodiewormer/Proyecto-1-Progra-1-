#include "DueñoContainer.h"

// Constructor de la clase DueñoContainer
DueñoContainer::DueñoContainer()
{
	this->cantidad = 0;
	this->capacidad = 20;//Capacidad predeterminada
	this->dueños = new Dueño * [capacidad];
}
// Destructor de la clase DueñoContainer
DueñoContainer::~DueñoContainer()
{
	for (int i = 0; i < this->cantidad; i++){
		delete this->dueños[i];//Elimina los dueños
	}
	delete[] this->dueños;//Elimina el arreglo de dueños
}

bool DueñoContainer::agregarDueño(Dueño* dueño)
{
	if (cantidad < capacidad) {//Verifica que no se haya llegado a la capacidad máxima
		dueños[cantidad++] = dueño;
		return true;//si se agrega correctamente retorna true
	}
	return false;//si no se agrega correctamente retorna false

}
// Obtiene un dueño por su ID
Dueño* DueñoContainer::getDueño(std::string ID)
{
	for (int i = 0; i < this->cantidad; i++){
		if (this->dueños[i]->getID() == ID){
			return this->dueños[i];
		}
	}
	return nullptr;
}
// Retorna una representación en string del contenedor
std::string DueñoContainer::toString() const 
{
	std::stringstream ss;
	ss << "Duennos: " << std::endl;
	ss << "------------------------------------" << std::endl;
	for (int i = 0; i < this->cantidad; i++){
		ss << "------------------------------------" << std::endl;
		ss << this->dueños[i]->toString() << std::endl;
		ss << "------------------------------------" << std::endl;
	}
	return ss.str();
	
}