#include "Agenda.h"

Agenda::Agenda() : dias(6), horas(12) {
    citas = new CitaContainer(dias * horas);
}

Agenda::~Agenda() {
    delete citas;
}

bool Agenda::agendarCita(Cita* cita, int dia, int hora) {
    if (dia >= 0 && dia < dias && hora >= 0 && hora < horas) {
        return citas->agregarCita(cita, dia * horas + hora);
    }
    return false;
}

bool Agenda::cancelarCita(int dia, int hora) {
    if (dia >= 0 && dia < dias && hora >= 0 && hora < horas) {
        return citas->cancelarCita(dia * horas + hora);
    }
    return false;
}

Cita* Agenda::obtenerCita(int dia, int hora) {
    if (dia >= 0 && dia < dias && hora >= 0 && hora < horas) {
        return citas->obtenerCita(dia * horas + hora);
    }
    return nullptr;
}

std::string Agenda::toString() const {
    return citas->toString(dias, horas);
}
