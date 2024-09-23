#include "Menu.h"
#include "Hospital.h"
//La cantidad de mascostas que se pueden tener es 10, esto se realisa en tiempo de compilacion.
int main() {
	Hospital hospital;
	hospital.datosPrueba();//Eliminar antes de entregar
	Menu::inicioPrograma(&hospital);
	return 0;
}