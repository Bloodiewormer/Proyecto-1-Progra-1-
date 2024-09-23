#pragma once
#include <iostream>
#include <sstream>
#include "Especialidad.h"
#include "Agenda.h"

class Doctor
{
private:
	std::string nombre;
	std::string ID;
	Especialidad* especialidad;
	Agenda* agenda;
public:
	Doctor(std::string nombre, std::string ID, Especialidad* especialidad);
	virtual ~Doctor();
	bool agendarCita(Cita* cita, int dia,int hora);
	bool cancelarCita(int dia, int hora);
	std::string getNombre();
	std::string getID();
	Especialidad* getEspecialidad();
	Agenda* getAgenda();
	std::string toString() const;
};

