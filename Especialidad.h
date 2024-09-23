#pragma once
#include <iostream>
#include <sstream>
class Especialidad
{
private:
	std::string nombre;
public:
	Especialidad(std::string nombre);
	virtual ~Especialidad();
	std::string getNombre();
	std::string toString() const;	
};

