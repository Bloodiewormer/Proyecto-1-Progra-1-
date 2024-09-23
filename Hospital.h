#pragma once
#include <iostream>
#include "EspecialidadContainer.h"
#include "DoctorContainer.h"
#include "Due�oContainer.h"

class Hospital
{
private:
	EspecialidadContainer* especialidades;
	DoctorContainer* doctores;
	Due�oContainer* due�os;
public:
	Hospital();
	~Hospital();
	void datosPrueba();
	//Metodos Agregar
	bool agregarEspecialidad(std::string name);//nombre
	bool agregarDoctor(std::string nom, std::string ID, std::string esp);//nombre, ID, especialidad
	bool agregarDue�o(std::string nombre, std::string ID);//nombre, ID
	bool agregarMascota(std::string nombre, std::string especie, std::string raza, int edad, std::string duennoID);//nombre, especie, raza, edad, due�oID
	//Metodos mostrar
	std::string mostrarEspecialidades();
	std::string mostrarDue�osCM();//CM /Con Mascotas
	//getters
	Especialidad* getEspecialidad(std::string name);
	Doctor* getDoctor(std::string ID);
	Due�o* getDue�o(std::string ID);
	int getCantidaddeDoc() const;

	//Metodos de vec 
	Doctor** getDoctoresPE(Especialidad* especialidad, int& cont);//PE / Por Especialidad //cont es la cantidad de doctores, referencia para que se modifique en la funcion
	Doctor** getDoctores();//Todos los doctores

	
};
