// Menu.h
#pragma once
#include <iostream>
#include "Hospital.h"
using namespace std;

class Menu
{
public:
	//menu inicial
	static void inicioPrograma(Hospital* hos);//Muestra la ventana inicial del programa
	static int ventanaMenuPrincipal();//Muestra la ventana del men� principal y retorna la opci�n seleccionada
	//submenus
	static void ventanaAdministracion(Hospital* hos);//Muestra la ventana de administraci�n
	static void ventanaControlCitas(Hospital* hos);//Muestra la ventana de control de citas
	static void ventanaBusquedas(Hospital* hos);//Muestra la ventana de b�squedas

	//ventanas de ingreso de datos
	static void ventanaIngresarEspecialidad(Hospital* hos);//Muestra la ventana para ingresar una nueva especialidad
	static void ventanaIngresarDoctor(Hospital* hos);//Muestra la ventana para ingresar un nuevo doctor
	static void ventanaIngresarDueno(Hospital* hos);    //Muestra la ventana para ingresar un nuevo due�o
	static void ventanaIngresarMascota(Hospital* hos);//Muestra la ventana para ingresar una nueva mascota
	//ventanas de control de citas
	static void ventanaSacarCita(Hospital* hos);//Muestra la ventana para sacar una cita
	static void ventanaCancelarCita(Hospital* hos);//Muestra la ventana para cancelar una cita
	static void ventanaMostrarCalendarioCitasDoctor(Hospital* hos);//Muestra la ventana para mostrar el calendario de citas de un doctor
	static void ventanaMostrarCitasDueno(Hospital* hos);//Muestra la ventana para mostrar las citas de un due�o
	//ventanas de busquedas
	static void ventanaMostrarEspecialidades(Hospital* hos);//Muestra la ventana para mostrar las especialidades
	static void ventanaMostrarDoctoresPorEspecialidad(Hospital* hos);//Muestra la ventana para mostrar los doctores por especialidad
	static void ventanaMostrarDuenosConMascotas(Hospital* hos);//Muestra la ventana para mostrar los due�os con mascotas
	static void ventanaMostrarPacientesPorDoctor(Hospital* hos);//Muestra la ventana para mostrar los pacientes por doctor
	//utilidades
	static string intToDay(int dia);//Convierte un entero a un string con el nombre del d�a
};