#include "EspecialidadContainer.h"

EspecialidadContainer::EspecialidadContainer()
{
	this->tam = 10;
	this->can = 0;
	this->especialidades = new Especialidad * [this->tam];
}

EspecialidadContainer::~EspecialidadContainer()
{
	for (int i = 0; i < this->can; i++){
		delete this->especialidades[i];
	}
	delete[] this->especialidades;
}

bool EspecialidadContainer::agregarEspecialidad(Especialidad* especialidad)
{
	for (int i = 0; i < this->can; i++){//Verifica que no se repitan especialidades
		if (this->especialidades[i]->getNombre() == especialidad->getNombre()){
			return false;
		}
	}
	if (can < tam){
	especialidades[can++] = especialidad;
	return true;
	}
	return false;
}

Especialidad* EspecialidadContainer::getEspecialidad(std::string Name)
{
	for (int i = 0; i < this->can; i++){
		if (this->especialidades[i]->getNombre() == Name){
			return this->especialidades[i];
		}
	}
	return nullptr;
	
}

std::string EspecialidadContainer::toString()
{
	std::stringstream ss;
	ss << "Especialidades: " << std::endl;
	for (int i = 0; i < this->can; i++){
		ss << this->especialidades[i]->toString() << std::endl;
	}
	return ss.str();
}