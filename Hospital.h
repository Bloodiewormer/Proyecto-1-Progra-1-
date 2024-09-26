#pragma once
#include <iostream>
#include "EspecialidadContainer.h"
#include "DoctorContainer.h"
#include "Due�oContainer.h"

class Hospital
{
private:
    EspecialidadContainer* especialidades; // Contenedor de especialidades
    DoctorContainer* doctores; // Contenedor de doctores
    Due�oContainer* due�os; // Contenedor de due�os

public:
    Hospital(); // Constructor
    ~Hospital(); // Destructor

    // Carga datos de prueba en el hospital
    void datosPrueba();

    // M�todos para agregar entidades al hospital
    bool agregarEspecialidad(std::string name); // Agrega una especialidad
    bool agregarDoctor(std::string nom, std::string ID, std::string esp); // Agrega un doctor
    bool agregarDue�o(std::string nombre, std::string ID); // Agrega un due�o
    bool agregarMascota(std::string nombre, std::string especie, std::string raza, int edad, std::string duennoID); // Agrega una mascota

    // M�todos para mostrar informaci�n del hospital
    std::string mostrarEspecialidades(); // Muestra todas las especialidades
    std::string mostrarDue�osCM(); // Muestra due�os con mascotas

    // Getters
    Especialidad* getEspecialidad(std::string name); // Obtiene una especialidad por su nombre
    Doctor* getDoctor(std::string ID); // Obtiene un doctor por su ID
    Due�o* getDue�o(std::string ID); // Obtiene un due�o por su ID
    int getCantidaddeDoc() const; // Obtiene la cantidad de doctores

    // M�todos para obtener vectores de doctores
    Doctor** getDoctoresPE(Especialidad* especialidad, int& cont); // Obtiene doctores por especialidad
    Doctor** getDoctores(); // Obtiene todos los doctores
};
