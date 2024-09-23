#include "Due�oContainer.h"

Due�oContainer::Due�oContainer()
{
	this->cantidad = 0;
	this->capacidad = 10;
	this->due�os = new Due�o * [capacidad];
}

Due�oContainer::~Due�oContainer()
{
	for (int i = 0; i < this->cantidad; i++){
		delete this->due�os[i];
	}
	delete[] this->due�os;
}

bool Due�oContainer::agregarDue�o(Due�o* due�o)
{
	if (cantidad < capacidad){
		due�os[cantidad++] = due�o;
		return true;
	}
	return false;

}

Due�o* Due�oContainer::getDue�o(std::string ID)
{
	for (int i = 0; i < this->cantidad; i++){
		if (this->due�os[i]->getID() == ID){
			return this->due�os[i];
		}
	}
	return nullptr;
}

std::string Due�oContainer::toString() const 
{
	std::stringstream ss;
	ss << "Due�os: " << std::endl;
	ss << "------------------------------------" << std::endl;
	for (int i = 0; i < this->cantidad; i++){
		ss << "------------------------------------" << std::endl;
		ss << this->due�os[i]->toString() << std::endl;
		ss << "------------------------------------" << std::endl;
	}
	return ss.str();
	
}