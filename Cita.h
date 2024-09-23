#pragma once
#include <iostream>
#include <sstream>
#include "Mascota.h"
#include "Due�o.h"
class Cita {
private:
	Mascota* mascota;
	Due�o* due�o;
public:
	Cita(Mascota* mascota, Due�o* due�o);
	virtual ~Cita();
	std::string getNombreMascota() const;
	std::string getNombreDue�o() const;
	Due�o* getDue�o() const;
	Mascota* getMascota() const;
	std::string toString() const;
};