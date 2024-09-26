#include "DoctorContainer.h"

// Constructor de la clase DoctorContainer
DoctorContainer::DoctorContainer()
{
	cantidad = 0;
	tamano = 20;//Capacidad Total
	doctores = new Doctor * [tamano];
}
// Destructor de la clase DoctorContainer
DoctorContainer::~DoctorContainer()
{
	for (int i = 0; i < cantidad; i++){
		delete doctores[i];
	}
	delete[] doctores;
}
// Agrega un doctor al contenedor
bool DoctorContainer::agregarDoctor(Doctor* doctor)
{
	for (int i = 0; i < cantidad; i++){//Verifica que no se repitan doctores
		if (doctores[i]->getID() == doctor->getID()){
			return false;
		}
	}
	if (cantidad < tamano) {//Verifica que no se haya llegado a la capacidad máxima
		doctores[cantidad++] = doctor;
		return true;
	}
	return false;
}
// Obtiene los doctores por especialidad
Doctor** DoctorContainer::getDoctoresPE(Especialidad* especialidad, int& cont)
{
	Doctor** doctoresEspecialidad = new Doctor * [cantidad];
	cont = 0;
	for (int i = 0; i < cantidad; i++){
		if (doctores[i]->getEspecialidad() == especialidad){
			doctoresEspecialidad[cont++] = doctores[i];//al ser cont con & se modifica en la funcion en la que se llama, ya que es una referencia
		}
	}
	return doctoresEspecialidad;//retorna un arreglo con los doctores de la especialidad,puede ser vacio
}
// Obtiene todos los doctores
Doctor** DoctorContainer::getDoctores()
{
	Doctor** alldoctores = new Doctor * [cantidad];
	for (int i = 0; i < cantidad; i++){
		alldoctores[i] = doctores[i];
	}
	return alldoctores;//retorna un arreglo con todos los doctores
}
// Obtiene un doctor por su ID
Doctor* DoctorContainer::getDoctor(std::string ID)
{
	for (int i = 0; i < cantidad; i++){
		if (doctores[i]->getID() == ID){
			return doctores[i];
		}
	}
	return nullptr;
}
// Retorna la cantidad de doctores en el contenedor
int DoctorContainer::getCantidad() const
{
	return cantidad;
}
// Retorna una representación en string del contenedor
std::string DoctorContainer::toString()
{
	std::stringstream ss;
	ss << "Doctores: " << std::endl;
	for (int i = 0; i < this->cantidad; i++){
		ss << this->doctores[i]->toString() << std::endl;
	}
	return ss.str();
}