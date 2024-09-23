#include "Agenda.h"

Agenda::Agenda()
{
	//Crea una matriz
	this->dias = 6;//lunes a sabado, //columanas
	this->horas = 12;//8 a 19  //filas
	this->citas = new Cita * *[dias];
	//Limpiar la matriz
	for (int i = 0; i < dias; i++) {
		this->citas[i] = new Cita * [horas];
		for (int j = 0; j < horas; j++) {
			this->citas[i][j] = nullptr;
		}
	}
}

Agenda::~Agenda()
{//Eliminar todas las citas
	for (int f = 0; f < dias; f++) {//Iterar sobre cada fila
		for (int c = 0; c < horas; c++) {//Iterar sobre cada columna
			if (citas[f][c]) delete citas[f][c];//si existe una cita en esa posicion, la elimina
		}
	}
	//Eliminar las filas
	for (int i = 0; i < dias; i++) {
		delete[] this->citas[i];
	}
	//Eliminar la matriz
	delete[] this->citas;
}

bool Agenda::agendarCita(Cita* cita,int dia,int hora )
{
	if (dia >= 0 && dia < dias && hora >= 0 && hora < horas) {
		if (this->citas[dia][hora] == nullptr) {
			this->citas[dia][hora] = cita;
			return true;
		}
	}
	return false;
}

bool Agenda::cancelarCita(int dia, int hora)
{
	if (dia >= 0 && dia < dias && hora >= 0 && hora < horas) {
		if (this->citas[dia][hora] != nullptr) {
			delete this->citas[dia][hora];
			this->citas[dia][hora] = nullptr;
			return true;
		}
	}
	return false;
	
}


Cita* Agenda::obtenerCita(int dia, int hora)
{
	if (dia >= 0 && dia < dias && hora >= 0 && hora < horas) {
		return this->citas[dia][hora];
	}
	return nullptr;
}

std::string Agenda::toString() const
{
	std::stringstream result;
	result << "Hora   Lunes       Martes      Miercoles   Jueves      Viernes     Sabado \n";
	result << "--------------------------------------------------------------------------\n";
	for (int hora = 8; hora <= 19; ++hora) {
		result << hora << ":00";
		if (hora < 10) result << " ";  // Para alinear las horas de un solo dígito
		for (int dia = 0; dia < dias; ++dia) {// Iterar sobre cada día para esa hora
			if (this->citas[dia][hora - 8] == nullptr) {
				result << "  Vacante   ";
			}
			else{
				result << "  Ocupado   ";
			}
		}
		result << std::endl;
    }
	return result.str();
}