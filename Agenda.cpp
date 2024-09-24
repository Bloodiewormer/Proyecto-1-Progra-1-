#include "Agenda.h"

Agenda::Agenda() {
    citas = new CitaContainer(72);   //dias * horas
}

Agenda::~Agenda() {
    delete citas;
}

bool Agenda::agendarCita(Cita* cita, int dia, int hora) {
    int hr = hora - 8;
    if (dia >= 0 && dia < 6 && hr >= 0 && hr < 12) {
        return citas->agregarCita(cita, dia * 12 + hr);
    }
    return false;
}

bool Agenda::cancelarCita(int dia, int hora) {
    int hr = hora - 8;
    if (dia >= 0 && dia < 6 && hr >= 0 && hr < 12) {
        return citas->cancelarCita(dia * 12 + hr);
    }
    return false;
}

Cita* Agenda::obtenerCita(int dia, int hora) {
    if (dia >= 0 && dia < 6 && hora >= 0 && hora < 12) {
        return citas->obtenerCita(dia * 12 + hora);
    }
    return nullptr;
}

std::string Agenda::toString() const {
    return citas->toString();
}
