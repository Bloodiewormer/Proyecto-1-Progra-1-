#pragma once
#include <iostream>
#include <sstream>
#include "Mascota.h"
#include "Dueño.h"
class Cita {
private:
	Mascota* mascota;
	Dueño* dueño;
public:
	Cita(Mascota* mascota, Dueño* dueño);
	virtual ~Cita();
	std::string getNombreMascota() const;
	std::string getNombreDueño() const;
	Dueño* getDueño() const;
	Mascota* getMascota() const;
	std::string toString() const;
};