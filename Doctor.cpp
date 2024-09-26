#include "Doctor.h"

Doctor::Doctor(std::string nombre, std::string ID, Especialidad* especialidad)
{
	this->nombre = nombre;
	this->ID = ID;
	this->especialidad = especialidad;
	//create and initialize the agenda
	this->agenda = new Agenda(72);
}

Doctor::~Doctor()
{
}

bool Doctor::agendarCita(Cita* cita,int dia ,int hora)
{
	if (this->agenda->agendarCita(cita, dia, hora) == true){
		return true;
	}
	else{
		return false;
	}
}

bool Doctor::cancelarCita(int dia, int hora)
{
	if (this->agenda->cancelarCita(dia, hora) == true){
		return true;
	}
	else{
		return false;
	}
}

std::string Doctor::getNombre()
{
	return this->nombre;
}

std::string Doctor::getID()
{
	return this->ID;
}

Especialidad* Doctor::getEspecialidad()
{
	return this->especialidad;
}

Agenda* Doctor::getAgenda()
{
	return this->agenda;
}

std::string Doctor::toString() const
{
	std::stringstream ss;
	ss << "Nombre: " << this->nombre << "\nID: " << this->ID;
	return ss.str();
}