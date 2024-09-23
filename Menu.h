#pragma once
#include <iostream>
#include "Hospital.h"
using namespace std;

class Menu
{
public:
	//menu inicial
	static void inicioPrograma(Hospital* hos);
	static int ventanaMenuPrincipal();
	//submenus
	static void ventanaAdministracion(Hospital* hos);
	static void ventanaControlCitas(Hospital* hos);
	static void ventanaBusquedas(Hospital* hos);

	//ventanas de ingreso de datos
	static void ventanaIngresarEspecialidad(Hospital* hos);
	static void ventanaIngresarDoctor(Hospital* hos);
	static void ventanaIngresarDueno(Hospital* hos);
	static void ventanaIngresarMascota(Hospital* hos);
	//ventanas de control de citas
	static void ventanaSacarCita(Hospital* hos);
	static void ventanaCancelarCita(Hospital* hos);
	static void ventanaMostrarCalendarioCitasDoctor(Hospital* hos);
	static void ventanaMostrarCitasDueno(Hospital* hos);
	//ventanas de busquedas
	static void ventanaMostrarEspecialidades(Hospital* hos);
	static void ventanaMostrarDoctoresPorEspecialidad(Hospital* hos);
	static void ventanaMostrarDuenosConMascotas(Hospital* hos);
	static void ventanaMostrarPacientesPorDoctor(Hospital* hos);
	//utilidades
	static string intToDay(int dia);
};