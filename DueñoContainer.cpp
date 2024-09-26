#include "Due�oContainer.h"

// Constructor de la clase Due�oContainer
Due�oContainer::Due�oContainer()
{
	this->cantidad = 0;
	this->capacidad = 20;//Capacidad predeterminada
	this->due�os = new Due�o * [capacidad];
}
// Destructor de la clase Due�oContainer
Due�oContainer::~Due�oContainer()
{
	for (int i = 0; i < this->cantidad; i++){
		delete this->due�os[i];//Elimina los due�os
	}
	delete[] this->due�os;//Elimina el arreglo de due�os
}

bool Due�oContainer::agregarDue�o(Due�o* due�o)
{
	if (cantidad < capacidad) {//Verifica que no se haya llegado a la capacidad m�xima
		due�os[cantidad++] = due�o;
		return true;//si se agrega correctamente retorna true
	}
	return false;//si no se agrega correctamente retorna false

}
// Obtiene un due�o por su ID
Due�o* Due�oContainer::getDue�o(std::string ID)
{
	for (int i = 0; i < this->cantidad; i++){
		if (this->due�os[i]->getID() == ID){
			return this->due�os[i];
		}
	}
	return nullptr;
}
// Retorna una representaci�n en string del contenedor
std::string Due�oContainer::toString() const 
{
	std::stringstream ss;
	ss << "Duennos: " << std::endl;
	ss << "------------------------------------" << std::endl;
	for (int i = 0; i < this->cantidad; i++){
		ss << "------------------------------------" << std::endl;
		ss << this->due�os[i]->toString() << std::endl;
		ss << "------------------------------------" << std::endl;
	}
	return ss.str();
	
}