#pragma once
#include "MascotaContainer.h"
#include <iostream>
#include <sstream>

class Due�o
{
private:
	std::string nombre;
	std::string ID;
	MascotaContainer* mascotas;
public:
	Due�o();
	Due�o(std::string nombre, std::string ID);
	~Due�o();
	bool agregarMascota(Mascota* mascota);
	Mascota* getMascota(std::string name);
	std::string getNombre() const;
	std::string getID() const;
	std::string toString() const;
};

