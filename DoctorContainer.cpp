#include "DoctorContainer.h"

DoctorContainer::DoctorContainer()
{
	cantidad = 0;
	tamano = 10;
	doctores = new Doctor * [tamano];
}

DoctorContainer::~DoctorContainer()
{
	for (int i = 0; i < cantidad; i++){
		delete doctores[i];
	}
	delete[] doctores;
}

bool DoctorContainer::agregarDoctor(Doctor* doctor)
{
	for (int i = 0; i < cantidad; i++){//Verifica que no se repitan doctores
		if (doctores[i]->getID() == doctor->getID()){
			return false;
		}
	}
	if (cantidad < tamano){
		doctores[cantidad++] = doctor;
		return true;
	}
	return false;
}

Doctor** DoctorContainer::getDoctoresPE(Especialidad* especialidad, int& cont)
{
	Doctor** doctoresEspecialidad = new Doctor * [cantidad];
	cont = 0;
	for (int i = 0; i < cantidad; i++){
		if (doctores[i]->getEspecialidad() == especialidad){
			doctoresEspecialidad[cont++] = doctores[i];//al ser cont con & se modifica en la funcion en la que se llama, ya que es una referencia
		}
	}
	return doctoresEspecialidad;
}

Doctor** DoctorContainer::getDoctores()
{
	Doctor** alldoctores = new Doctor * [cantidad];
	for (int i = 0; i < cantidad; i++){
		alldoctores[i] = doctores[i];
	}
	return alldoctores;
}

Doctor* DoctorContainer::getDoctor(std::string ID)
{
	for (int i = 0; i < cantidad; i++){
		if (doctores[i]->getID() == ID){
			return doctores[i];
		}
	}
	return nullptr;
}

int DoctorContainer::getCantidad() const
{
	return cantidad;
}

std::string DoctorContainer::toString()
{
	std::stringstream ss;
	ss << "Doctores: " << std::endl;
	for (int i = 0; i < this->cantidad; i++){
		ss << this->doctores[i]->toString() << std::endl;
	}
	return ss.str();
}