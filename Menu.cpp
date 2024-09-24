#include "Menu.h"

void Menu::inicioPrograma(Hospital* hos)
{
	int opcion = 0;
	do {
		opcion = Menu::ventanaMenuPrincipal();
		switch (opcion) {
		case 1:
			// Submenu Administracion
			Menu::ventanaAdministracion(hos);
			break;
		case 2:
			// Submenu Control de Citas
			Menu::ventanaControlCitas(hos);
			break;
		case 3:
			// Submenu Busquedas y Listados
			Menu::ventanaBusquedas(hos);
			break;
		}
	} while (opcion != 0);
	cout << "Programa finalizado" << endl;
	system("pause");
}

int Menu::ventanaMenuPrincipal() {
	system("cls");
	int opcion;
	cout << "-------- Menu Principal --------\n";
	cout << "1- Submenu Administracion\n";
	cout << "2- Submenu Control de Citas\n";
	cout << "3- Submenu Busquedas y Listados\n";
	cout << "0- Salir\n";
	cout << "--------------------------------\n";
	cout << "Ingrese la opcion: ";
	cin >> opcion;
	system("cls");
	return opcion;
}

void Menu::ventanaAdministracion(Hospital* hos)
{
	int opcion;
	do{
	cout << "---- Submenu Administracion ----\n";
	cout << "1- Ingresar Especialidades\n";
	cout << "2- Ingresar Doctor (por especialidad)\n";
	cout << "3- Ingresar Duenno\n";
	cout << "4- Ingresar Mascota (por duenno)\n";
	cout << "0- Regresar al Menu Principal\n";
	cout << "--------------------------------\n";
	cout << "Ingrese la opcion: ";
	cin >> opcion;
	system("cls");
	switch (opcion) {
	case 1:
		// Ingresar Especialidades
		ventanaIngresarEspecialidad(hos);
		system("pause");
		break;
	case 2:
		// Ingresar Doctor (por especialidad)
		ventanaIngresarDoctor(hos);
		system("pause");
		break;
	case 3:
		// Ingresar Due�o
		ventanaIngresarDueno(hos);
		system("pause");
		break;
	case 4:
		// Ingresar Mascota (por due�o)
		ventanaIngresarMascota(hos);
		system("pause");
		break;
	}
	system("cls");
	} while (opcion != 0);
}

void Menu::ventanaControlCitas(Hospital* hos)
{
	int opcion;
	do{
	cout << "---- Submenu Control de Citas ----\n";
	cout << "1- Sacar Cita\n";
	cout << "2- Cancelar Cita\n";
	cout << "3- Mostrar Calendario de Citas por Doctor\n";
	cout << "4- Mostrar Citas por Duenno\n";
	cout << "0- Regresar al Menu Principal\n";
	cout << "----------------------------------\n";
	cout << "Ingrese la opcion: ";
	cin >> opcion;
	system("cls");
	switch (opcion) {
	case 1:
		// Sacar Cita
		ventanaSacarCita(hos);
		system("pause");
		break;
	case 2:
		// Cancelar Cita
		ventanaCancelarCita(hos);
		system("pause");
		break;
	case 3:
		// Mostrar Calendario de Citas por Doctor
		ventanaMostrarCalendarioCitasDoctor(hos);
		system("pause");
		break;
	case 4:
		// Mostrar Citas por Due�o
		ventanaMostrarCitasDueno(hos);
		system("pause");
		break;
	}
	system("cls");
	} while (opcion != 0);
}

void Menu::ventanaBusquedas(Hospital*hos)
{
	int opcion;
	do {
		cout << "---- Submenu Busquedas y Listados ----\n";
		cout << "1- Mostrar Listado de Especialidades\n";
		cout << "2- Mostrar Listado de Doctores por Especialidad\n";
		cout << "3- Mostrar Duennos con sus Mascotas\n";
		cout << "4- Mostrar Pacientes por Doctor\n";//<-- Clase Cita, dar ID de Doctor y mostrar todas las mascotas que tengan alguna cita con ese doctor
		cout << "0- Regresar al Menu Principal\n";
		cout << "--------------------------------------\n";
		cout << "Ingrese la opcion: ";
		cin >> opcion;
		system("cls");
		switch (opcion) {
		case 1:
			// Mostrar Listado de Especialidades
			ventanaMostrarEspecialidades(hos);
			system("pause");
			break;
		case 2:
			// Mostrar Listado de Doctores por Especialidad
			ventanaMostrarDoctoresPorEspecialidad(hos);
			system("pause");
			break;
		case 3:
			// Mostrar Due�os con sus Mascotas
			ventanaMostrarDuenosConMascotas(hos);
			system("pause");
			break;
		case 4:
			// Mostrar Pacientes por Doctor
			ventanaMostrarPacientesPorDoctor(hos);
			system("pause");
			break;
		}
		system("cls");
	} while (opcion != 0);
}

void Menu::ventanaIngresarEspecialidad(Hospital* hos)
{
	std::string nombre;
	std::cout << "Ingrese el nombre de la especialidad: ";
	std::cin >> nombre;
	Especialidad* especialidad = new Especialidad(nombre);
	if (hos->agregarEspecialidad(nombre) == true){
		system("cls");
		std::cout << "Especialidad agregada con exito" << std::endl;
	}
	else{
		system("cls");
		std::cout << "No se pudo agregar la especialidad" << std::endl;
	}
}

void Menu::ventanaIngresarDoctor(Hospital* hos )
{
	std::string nombre;
	std::string especialidad;
	std::string ID;
	std::cout << "Ingrese el nombre del doctor: ";
	std::cin >> nombre;
	std::cout << "Ingrese el ID del doctor: ";
	std::cin >> ID;
	std::cout << "Ingrese la especialidad del doctor: ";
	std::cin >> especialidad;
	if (hos->agregarDoctor(nombre, ID, especialidad) == true){
		system("cls");
		std::cout << "Doctor agregado con exito" << std::endl;
	}
	else{
		system("cls");
		std::cout << "No se pudo agregar el doctor" << std::endl;
	}
}

void Menu::ventanaIngresarDueno(Hospital* hos)
{
	std::string nombre;
	std::string ID;
	std::cout << "Ingrese el nombre del duenno: ";
	std::cin >> nombre;
	std::cout << "Ingrese el ID del duenno: ";
	std::cin >> ID;
	if (hos->agregarDue�o(nombre, ID) == true){
		system("cls");
		std::cout << "Duenno agregado con exito" << std::endl;
	}
	else{
		system("cls");
		std::cout << "No se pudo agregar el duenno" << std::endl;
	}
}

void Menu::ventanaIngresarMascota(Hospital* hos)
{
	std::string nombre;
	std::string especie;
	std::string raza;
	int edad;
	std::string due�oID;
	std::cout << "Ingrese el nombre de la mascota: ";
	std::cin >> nombre;
	std::cout << "Ingrese la especie de la mascota: ";
	std::cin >> especie;
	std::cout << "Ingrese la raza de la mascota: ";
	std::cin >> raza;
	std::cout << "Ingrese la edad de la mascota: ";
	std::cin >> edad;
	std::cout << "Ingrese el ID del due�o: ";
	std::cin >> due�oID;
	if (hos->agregarMascota(nombre, especie, raza, edad, due�oID) == true){
		system("cls");
		std::cout << "Mascota agregada con exito" << std::endl;
	}
	else{
		system("cls");
		std::cout << "No se pudo agregar la mascota" << std::endl;
	}
}

void Menu::ventanaSacarCita(Hospital* hos)
{
	std::string due�oID;
	std::cout << "Ingrese el ID del due�o: ";
	std::cin >> due�oID;
	Due�o* due�o = hos->getDue�o(due�oID);
	if (due�o != nullptr){
		std::cout << due�o->toString();
		std::string mascotaNombre;
		std::cout << "Ingrese el nombre de la mascota: ";
		std::cin >> mascotaNombre;
		Mascota* mascota = due�o->getMascota(mascotaNombre);
		if (mascota != nullptr){
			std::string doctorID;
			std::cout << "Ingrese el ID del doctor: ";
			std::cin >> doctorID;
			Doctor* doctor = hos->getDoctor(doctorID);
			if (doctor != nullptr){
				system("cls");
				cout<<doctor->getAgenda()->toString();
				int dia;
				int hora;
				std::cout << "Ingrese el dia de la cita: 1 - Lunes, 2 - Martes, 3 - Miercoles, 4 - Jueves, 5 - Viernes, 6 - Sabado: " << std::endl;
				std::cin >> dia;
				std::cout << "Ingrese la hora de la cita: ";
				std::cin >> hora;
				Cita* cita = new Cita(mascota, due�o);
				if (doctor->agendarCita(cita, dia-1, hora) == true) {
					system("cls");
					std::cout << "Cita agendada con exito" << std::endl;
				}
				else {
					system("cls");
					std::cout << "No se pudo agendar la cita" << std::endl;
				}
			}
			else{
				system("cls");
				std::cout << "No se encontro ningun doctor con ese ID" << std::endl;
			}
		}
		else{
			system("cls");
			std::cout << "No se encontro ninguna mascota con ese nombre" << std::endl;
		}
	}
	else{
		std::cout << "No se encontro ningun due�o con ese ID" << std::endl;
	}
}

void Menu::ventanaCancelarCita(Hospital* hos)
{
	std::string due�oID;
	std::cout << "Ingrese el ID del due�o: ";
	std::cin >> due�oID;
	Due�o* due�o = hos->getDue�o(due�oID);

	if (due�o != nullptr){
		std::string doctorID;
		std::cout << "Ingrese el ID del doctor: ";
		std::cin >> doctorID;
		Doctor* doctor = hos->getDoctor(doctorID);
		if (doctor != nullptr) {
			//encontrar las citas del doctor con el due�o
			for (int i = 0; i < 6; i++) {
				for (int j = 0; j < 12; j++) {
					if (doctor->getAgenda()->obtenerCita(i, j) != nullptr) {
						if (doctor->getAgenda()->obtenerCita(i, j)->getNombreDue�o() == due�o->getNombre()) {
							std::cout << "======================================" << std::endl;
							std::cout << "Dia: " << intToDay(i) << " Hora: " << j + 8 << std::endl;
							std::cout << "Doctor: " << doctor->getNombre() << std::endl;
							std::cout << "Duenno: " << doctor->getAgenda()->obtenerCita(i, j)->getNombreDue�o() << std::endl;
							std::cout << "Mascota:" << doctor->getAgenda()->obtenerCita(i, j)->getMascota()->getNombre() << std::endl;
							std::cout << "======================================" << std::endl;
						}
					}
				}
			}
			int dia;
			int hora;
			std::cout << "Ingrese el dia de la cita: 1 - Lunes, 2 - Martes, 3 - Miercoles, 4 - Jueves, 5 - Viernes, 6 - Sabado: " << std::endl;
			std::cin >> dia;
			std::cout << "Ingrese la hora de la cita: ";
			std::cin >> hora;
			if (doctor->cancelarCita(dia-1, hora) == true) {
				system("cls");
				std::cout << "Cita cancelada con exito" << std::endl;
			}
			else {
				system("cls");
				std::cout << "No se pudo cancelar la cita" << std::endl;
			}
		}
		else{
			std::cout << "No se encontro ningun doctor con ese ID" << std::endl;
		}
	}
	else{
		std::cout << "No se encontro ningun due�o con ese ID" << std::endl;
	}	
}

void Menu::ventanaMostrarCalendarioCitasDoctor(Hospital* hos)
{
	std::cout << "Ingrese el ID del doctor: ";
	std::string ID;
	std::cin >> ID;
	Doctor* doctor = hos->getDoctor(ID);
	if (doctor != nullptr){
		cout << doctor->getAgenda()->toString();
		std::cout << "--------------------------------------------------------------------------\n";
		//Mostrar detalles de las citas
		std::cout << "\nDetalles de las citas:\n";
		std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl;
		for (int dia = 0; dia < 6; ++dia) {
			for (int hora = 0; hora < 12; ++hora) {
				if (doctor->getAgenda()->obtenerCita(dia,hora) != nullptr) {
					std::cout << "Dia: " << intToDay(dia) << ", Hora: " << (hora + 8) << ":00\n";
					std::cout << "Duenno: " << doctor->getAgenda()->obtenerCita(dia, hora)->getNombreDue�o() << "\n";
					std::cout << "Mascota: " << doctor->getAgenda()->obtenerCita(dia, hora)->getNombreMascota() << "\n";
					std::cout << "-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-" << std::endl;
				}
			}
		}	
	}
	else{
		std::cout << "No se encontro ningun doctor con ese ID" << std::endl;
	}
}

void Menu::ventanaMostrarCitasDueno(Hospital* hos)
{
	int cont=0;
	std::cout << "Ingrese el ID del due�o: ";
	std::string ID;
	std::cin >> ID;
	Due�o* due�o = hos->getDue�o(ID);
	if (due�o != nullptr){
		std::cout << due�o->toString();
		std::string nombreMascota;
		std::cout << "Ingrese el nombre de la mascota: ";
		std::cin >> nombreMascota;
		Doctor** doc = hos->getDoctores();
		if (doc[0] == nullptr) {
			std::cout << "No hay doctores en el hospital" << std::endl;
			return;
		}
		Mascota* mascota = due�o->getMascota(nombreMascota);
		if (mascota == nullptr) {
			std::cout << "No se encontro ninguna mascota con ese nombre" << std::endl;
			return;
		}
		else{
			std::cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/ " << std::endl;
			std::cout << "Citas de la mascota: " << nombreMascota << std::endl;
			for (int i = 0; i < hos->getCantidaddeDoc(); i++){//Recorre todos los doctores
				for (int j = 0; j < 6; j++) {//Recorre los dias
					for (int k = 0; k < 12; k++) {//Recorre las horas
						if (doc[i]->getAgenda() != nullptr && doc[i]->getAgenda()->obtenerCita(j, k) != nullptr) {
							if (doc[i]->getAgenda()->obtenerCita(j, k)->getMascota()->getNombre() == nombreMascota) {
								cont++;
								std::cout << "Dia: " << intToDay(j) << " Hora: " << k + 8 <<":00" << std::endl;
								std::cout << "Doctor: " << doc[i]->getNombre() << std::endl;
								std::cout << "Duenno: " << doc[i]->getAgenda()->obtenerCita(j, k)->getNombreDue�o() << std::endl;
								std::cout << "Mascota:" << doc[i]->getAgenda()->obtenerCita(j, k)->getMascota()->getNombre() << std::endl;
								std::cout << "/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/ " << std::endl;
							}
						}
					}
				}
			}
			if (cont == 0) {
				std::cout << "No se encontro ninguna cita para la mascota" << std::endl;
			}
		}
	}
	else{
		std::cout << "No se encontro ningun due�o con ese ID" << std::endl;
	}
}

void Menu::ventanaMostrarEspecialidades(Hospital* hos)
{
	cout << "======================" << std::endl;
	cout<<hos->mostrarEspecialidades();
	cout << "======================" << std::endl;
}

void Menu::ventanaMostrarDoctoresPorEspecialidad(Hospital* hos)
{
	std::string especialidad;
	std::cout << "Ingrese la especialidad: ";
	std::cin >> especialidad;
	system("cls");
	Especialidad* especialidadObj = hos->getEspecialidad(especialidad);
	int count;
	Doctor** doctoresPE = hos->getDoctoresPE(especialidadObj, count);
	if (especialidadObj == nullptr) {
		std::cout << "No se encontro ninguna especialidad con ese nombre" << std::endl;
		return;
	}
	else {
		if (count > 0) {
			std::cout << "Doctores con la especialidad: " << especialidad << std::endl;
			for (int i = 0; i < count; i++) {
				std::cout << "--------------------------------" << std::endl;
				cout << doctoresPE[i]->toString() << endl;
				std::cout << "--------------------------------" << std::endl;
			}
		}
		else {
			std::cout << "No se encontro ningun doctor con esa especialidad" << std::endl;
		}
	}
	delete[] doctoresPE; // borrar el arreglo de doctores

}

void Menu::ventanaMostrarDuenosConMascotas(Hospital* hos)
{

	cout<<hos->mostrarDue�osCM();
}

void Menu::ventanaMostrarPacientesPorDoctor(Hospital* hos)
{
	std::string ID;
	std::cout << "Ingrese el ID del doctor: ";
	std::cin >> ID;
	system("cls");
	Doctor* doctor = hos->getDoctor(ID);
	if (doctor != nullptr){
		std::cout << "Pacientes del doctor: " << doctor->getNombre() << std::endl;
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 12; j++) {
				if (doctor->getAgenda() != nullptr && doctor->getAgenda()->obtenerCita(i, j) != nullptr) {
					std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
					std::cout << "Nombre del duenno:";
					std::cout << doctor->getAgenda()->obtenerCita(i, j)->getNombreDue�o() << std::endl;
					std::cout << doctor->getAgenda()->obtenerCita(i, j)->getMascota()->toString() << std::endl;
				}
			}
		}
		std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	}
	else
	{
		std::cout << "No se encontro ningun doctor con ese ID" << std::endl;
	}
}

string Menu::intToDay(int dia) 
{
	const std::string daysOfWeek[] = { "Lunes", "Martes", "Mi�rcoles", "Jueves", "Viernes", "S�bado" };
	return daysOfWeek[dia];
}