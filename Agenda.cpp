#include "Agenda.h"



Agenda::Agenda(int capacidad) : capacidad(capacidad), cantidad(0) {
    citas = new Cita * [capacidad];//dias * horas
    for (int i = 0; i < capacidad; ++i) {
        citas[i] = nullptr;
    }  
}

Agenda::~Agenda() {
    for (int i = 0; i < capacidad; ++i) {
        if (citas[i]) delete citas[i];
    }
    delete[] citas;
}

bool Agenda::agendarCita(Cita* cita, int dia, int hora) {
    int hr = hora - 8;
    if (dia >= 0 && dia < 6 && hr >= 0 && hr < 12) {
	int index = dia * 12 + hr;
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

bool Agenda::cancelarCita(int dia, int hora) {
    int hr = hora - 8;
    if (dia >= 0 && dia < 6 && hr >= 0 && hr < 12) {
		int index = dia * 12 + hr;
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

Cita* Agenda::obtenerCita(int dia, int hora) {
    if (dia >= 0 && dia < 6 && hora >= 0 && hora < 12) {
		int index = dia * 12 + (hora - 8);
        if (index >= 0 && index < capacidad) {
        return citas[index];
      }
    }
    return nullptr;
}

std::string Agenda::toString() const {
    std::stringstream result;
    result << "Hora   Lunes       Martes      Miercoles   Jueves      Viernes     Sabado \n";
    result << "--------------------------------------------------------------------------\n";
    for (int hora = 8; hora <= 19; ++hora) {
        result << hora << ":00";
        if (hora < 10) result << " ";  // To align single-digit hours
        for (int dia = 0; dia < 6; ++dia) {
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

