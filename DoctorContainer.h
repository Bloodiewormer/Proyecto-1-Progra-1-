#pragma once
#include "Doctor.h"
#include <iostream>
#include <sstream>
class DoctorContainer
{
private:
	Doctor** doctores;
	int cantidad;
	int tamano;
public:
	DoctorContainer();
	~DoctorContainer();
	bool agregarDoctor(Doctor* doctor);
	Doctor** getDoctoresPE(Especialidad* especialidad, int& cont);
	Doctor** getDoctores();
	Doctor* getDoctor(std::string ID);
	int getCantidad() const;
	std::string toString();
};

