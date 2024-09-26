#include "Menu.h"
#include "Hospital.h"

int main() {
	//Color de la consola letras negras con fondo blanco
	system("color F0");

	Hospital hospital;
	hospital.datosPrueba();//Eliminar antes de entregar
	Menu::inicioPrograma(&hospital);
	return 0;
}

//La cantidad de mascotas que se pueden tener es 10, esto se puede cambiar en la clase ContenedorMascotas
//La cantidad de especialidades que se pueden tener es 10, esto se puede cambiar en la clase ContenedorEspecialidades
//La cantidad de doctores que se pueden tener es 20, esto se puede cambiar en la clase ContenedorDoctores
//La cantidad de Due�os que se pueden tener es 20, esto se puede cambiar en la clase ContenedorDue�os
//La Agenda de citas tiene una capacidad de 72 Citas, esto se debe a que se tienen 6 d�as y 12 horas por d�a (6*12=72) no se debe cambiar