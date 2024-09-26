#pragma once
#include "Doctor.h"
#include <iostream>
#include <sstream>

class DoctorContainer {
private:
    Doctor** doctores; // Vector de punteros a Doctor
    int cantidad; // N�mero de doctores en el contenedor
    int tamano; // Capacidad del contenedor

public:
    // Constructor que inicializa el contenedor de doctores
    DoctorContainer();

    // Destructor que libera la memoria utilizada por el contenedor
    ~DoctorContainer();

    // M�todo para agregar un doctor al contenedor
    bool agregarDoctor(Doctor* doctor);

    // M�todo para obtener doctores por especialidad
    Doctor** getDoctoresPE(Especialidad* especialidad, int& cont);

    // M�todo para obtener todos los doctores
    Doctor** getDoctores();

    // M�todo para obtener un doctor por ID
    Doctor* getDoctor(std::string ID);

    // M�todo que retorna la cantidad de doctores en el contenedor
    int getCantidad() const;

    // M�todo que retorna una representaci�n en string del contenedor
    std::string toString();
};
