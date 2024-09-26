#pragma once
#include "Doctor.h"
#include <iostream>
#include <sstream>

class DoctorContainer {
private:
    Doctor** doctores; // Vector de punteros a Doctor
    int cantidad; // Número de doctores en el contenedor
    int tamano; // Capacidad del contenedor

public:
    // Constructor que inicializa el contenedor de doctores
    DoctorContainer();

    // Destructor que libera la memoria utilizada por el contenedor
    ~DoctorContainer();

    // Método para agregar un doctor al contenedor
    bool agregarDoctor(Doctor* doctor);

    // Método para obtener doctores por especialidad
    Doctor** getDoctoresPE(Especialidad* especialidad, int& cont);

    // Método para obtener todos los doctores
    Doctor** getDoctores();

    // Método para obtener un doctor por ID
    Doctor* getDoctor(std::string ID);

    // Método que retorna la cantidad de doctores en el contenedor
    int getCantidad() const;

    // Método que retorna una representación en string del contenedor
    std::string toString();
};
