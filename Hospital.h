#pragma once
#include <iostream>
#include "EspecialidadContainer.h"
#include "DoctorContainer.h"
#include "DueñoContainer.h"

class Hospital
{
private:
    EspecialidadContainer* especialidades; // Contenedor de especialidades
    DoctorContainer* doctores; // Contenedor de doctores
    DueñoContainer* dueños; // Contenedor de dueños

public:
    Hospital(); // Constructor
    ~Hospital(); // Destructor

    // Carga datos de prueba en el hospital
    void datosPrueba();

    // Métodos para agregar entidades al hospital
    bool agregarEspecialidad(std::string name); // Agrega una especialidad
    bool agregarDoctor(std::string nom, std::string ID, std::string esp); // Agrega un doctor
    bool agregarDueño(std::string nombre, std::string ID); // Agrega un dueño
    bool agregarMascota(std::string nombre, std::string especie, std::string raza, int edad, std::string duennoID); // Agrega una mascota

    // Métodos para mostrar información del hospital
    std::string mostrarEspecialidades(); // Muestra todas las especialidades
    std::string mostrarDueñosCM(); // Muestra dueños con mascotas

    // Getters
    Especialidad* getEspecialidad(std::string name); // Obtiene una especialidad por su nombre
    Doctor* getDoctor(std::string ID); // Obtiene un doctor por su ID
    Dueño* getDueño(std::string ID); // Obtiene un dueño por su ID
    int getCantidaddeDoc() const; // Obtiene la cantidad de doctores

    // Métodos para obtener vectores de doctores
    Doctor** getDoctoresPE(Especialidad* especialidad, int& cont); // Obtiene doctores por especialidad
    Doctor** getDoctores(); // Obtiene todos los doctores
};
