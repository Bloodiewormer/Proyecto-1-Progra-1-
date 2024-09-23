#pragma once
#include "Mascota.h"
#include <iostream>
#include <sstream>

class MascotaContainer
{
private:
	Mascota** mascotas;
	int cantidad;
	int capacidad;
public:
	MascotaContainer();
	~MascotaContainer();
	int getCantidad()const;
	bool agregarMascota(Mascota* mascota);
	Mascota* getMascota(std::string name);
	std::string toString();
};
