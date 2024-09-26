#include "Agenda.h"
//Constructor que inicializa una agenda con una capacidad
Agenda::Agenda(int capacidad) : capacidad(capacidad), cantidad(0) {
    citas = new Cita * [capacidad];//dias * horas
    for (int i = 0; i < capacidad; ++i) {
        citas[i] = nullptr;
    }  
}
//Destructor que libera la memoria utilizada por la agenda
Agenda::~Agenda() {
    for (int i = 0; i < capacidad; ++i) {
        if (citas[i]) delete citas[i];
    }
    delete[] citas;
}
//Agenda una cita en un día y hora específicos
bool Agenda::agendarCita(Cita* cita, int dia, int hora) {
    int hr = hora - 8;
    if (dia >= 0 && dia < 6 && hr >= 0 && hr < 12) {
		int index = dia * 12 + hr;//index = dia * 12 + hora
	    if (index >= 0 && index < capacidad) {
            if (citas[index] == nullptr) {
                citas[index] = cita;
              ++cantidad;
            return true;
            }
        }
    }
return false;
}

//Cancela una cita en un día y hora específicos
bool Agenda::cancelarCita(int dia, int hora) {
    int hr = hora - 8;
    if (dia >= 0 && dia < 6 && hr >= 0 && hr < 12) {
		int index = dia * 12 + hr;//index = dia * 12 + hora
        if (index >= 0 && index < capacidad) {
            if (citas[index] != nullptr) {
                delete citas[index];
                citas[index] = nullptr;
                --cantidad;
                return true;
            }
        }
        return false;
    }
}

//Obtiene una cita en un día y hora específicos
Cita* Agenda::obtenerCita(int dia, int hora) {
    if (dia >= 0 && dia < 6 && hora >= 0 && hora < 12) {
		int index = dia * 12 + (hora - 8);//Calcula el índice de la cita
        if (index >= 0 && index < capacidad) {
        return citas[index];
      }
    }
    return nullptr;
}

//Crea una representación en string de la agenda
std::string Agenda::toString() const {
    std::stringstream result;
    result << "Hora   Lunes       Martes      Miercoles   Jueves      Viernes     Sabado \n";
    result << "--------------------------------------------------------------------------\n";
	for (int hora = 8; hora <= 19; ++hora) {//8:00 - 19:00
        result << hora << ":00";
        if (hora < 10) result << " ";  // To align single-digit hours
		for (int dia = 0; dia < 6; ++dia) {//Lunes - Sabado
            if (citas[dia * 12 + (hora - 8)] == nullptr) {
                result << "  Vacante   ";
            }
            else {
                result << "  Ocupado   ";
            }
        }
        result << std::endl;
    }
    return result.str();
}

