#include "EspecialidadContainer.h"


// Constructor de la clase EspecialidadContainer
EspecialidadContainer::EspecialidadContainer()
{
	this->tam = 10;//Capacidad predeterminada
	this->can = 0;
	this->especialidades = new Especialidad * [this->tam];
}

// Destructor de la clase EspecialidadContainer
EspecialidadContainer::~EspecialidadContainer()
{
	for (int i = 0; i < this->can; i++) {//Elimina las especialidades
		delete this->especialidades[i];
	}
	delete[] this->especialidades;//Elimina el arreglo de especialidades
}

bool EspecialidadContainer::agregarEspecialidad(Especialidad* especialidad)
{
	for (int i = 0; i < this->can; i++){//Verifica que no se repitan especialidades
		if (this->especialidades[i]->getNombre() == especialidad->getNombre()){
			return false;
		}
	}
	if (can < tam) {//Verifica que no se haya llegado a la capacidad máxima
		this->especialidades[can++] = especialidad;
	return true;
	}
	return false;
}

Especialidad* EspecialidadContainer::getEspecialidad(std::string Name)
{
	for (int i = 0; i < this->can; i++){
		if (this->especialidades[i]->getNombre() == Name) {//Busca la especialidad por su nombre
			return this->especialidades[i];//si la encuentra la retorna
		}
	}
	return nullptr;//Si no la encuentra retorna nullptr
	
}
// Retorna una representación en string del contenedor
std::string EspecialidadContainer::toString()
{
	std::stringstream ss;
	ss << "Especialidades: " << std::endl;
	for (int i = 0; i < this->can; i++){
		ss << this->especialidades[i]->toString() << std::endl;
	}
	return ss.str();
}