#include "CitaContainer.h"
#include <sstream>

CitaContainer::CitaContainer(int capacidad) : capacidad(capacidad), cantidad(0) {
    citas = new Cita * [capacidad];
    for (int i = 0; i < capacidad; ++i) {
        citas[i] = nullptr;
    }
}

CitaContainer::~CitaContainer() {
    for (int i = 0; i < capacidad; ++i) {
        if (citas[i]) delete citas[i];
    }
    delete[] citas;
}

bool CitaContainer::agregarCita(Cita* cita, int index) {//index = dia * horas + hora ejem: 0*12 + 0 = 0
    if (index >= 0 && index < capacidad) {
        if (citas[index] == nullptr) {
            citas[index] = cita;
            ++cantidad;
            return true;
        }
    }
    return false;
}

bool CitaContainer::cancelarCita(int index) {
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

Cita* CitaContainer::obtenerCita(int index) {
    if (index >= 0 && index < capacidad) {
        return citas[index];
    }
    return nullptr;
}

std::string CitaContainer::toString() const {
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
