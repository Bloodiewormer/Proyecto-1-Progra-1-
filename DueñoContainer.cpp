#include "DueñoContainer.h"

DueñoContainer::DueñoContainer()
{
	this->cantidad = 0;
	this->capacidad = 10;
	this->dueños = new Dueño * [capacidad];
}

DueñoContainer::~DueñoContainer()
{
	for (int i = 0; i < this->cantidad; i++){
		delete this->dueños[i];
	}
	delete[] this->dueños;
}

bool DueñoContainer::agregarDueño(Dueño* dueño)
{
	if (cantidad < capacidad){
		dueños[cantidad++] = dueño;
		return true;
	}
	return false;

}

Dueño* DueñoContainer::getDueño(std::string ID)
{
	for (int i = 0; i < this->cantidad; i++){
		if (this->dueños[i]->getID() == ID){
			return this->dueños[i];
		}
	}
	return nullptr;
}

std::string DueñoContainer::toString() const 
{
	std::stringstream ss;
	ss << "Dueños: " << std::endl;
	ss << "------------------------------------" << std::endl;
	for (int i = 0; i < this->cantidad; i++){
		ss << "------------------------------------" << std::endl;
		ss << this->dueños[i]->toString() << std::endl;
		ss << "------------------------------------" << std::endl;
	}
	return ss.str();
	
}