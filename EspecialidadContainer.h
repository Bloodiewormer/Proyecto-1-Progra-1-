#pragma once
#include "Especialidad.h"
#include <iostream>
#include <sstream>
class EspecialidadContainer
{
private:
	Especialidad** especialidades;
	int can;
	int tam;
public:
	EspecialidadContainer();
	~EspecialidadContainer();
	bool agregarEspecialidad(Especialidad* especialidad);
	Especialidad* getEspecialidad(std::string Name);
	std::string toString();
};

