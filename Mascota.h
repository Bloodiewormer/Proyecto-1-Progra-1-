#pragma once
#include <iostream>
#include <sstream>

class Mascota
{
private:
	std::string nombre;
	std::string raza;
	std::string especie;
	int edad;


public:
	Mascota();
	Mascota(std::string nombre, std::string especie, std::string raza, int edad);
	~Mascota();
	std::string getNombre();
	std::string getRaza();
	std::string getEspecie();
	int getEdad()const;
	std::string toString()const;
};

