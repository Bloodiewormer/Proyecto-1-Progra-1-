#pragma once
#include "MascotaContainer.h"
#include <iostream>
#include <sstream>

class Dueño
{
private:
	std::string nombre;
	std::string ID;
	MascotaContainer* mascotas;
public:
	Dueño();
	Dueño(std::string nombre, std::string ID);
	~Dueño();
	bool agregarMascota(Mascota* mascota);
	Mascota* getMascota(std::string name);
	std::string getNombre() const;
	std::string getID() const;
	std::string toString() const;
};

