#pragma once
#include <iostream>
#include"Cita.h"
class Agenda {
private:
	Cita*** citas;//Libro Pagina 95: Matriz de punteros a objetos
	int dias;// filas
	int horas;// columnas
public:
	Agenda();
	~Agenda();
	bool agendarCita(Cita* cita, int dia, int hora);//A
	bool cancelarCita(int dia, int hora);
	Cita* obtenerCita(int dia, int hora);
	std::string toString()const;
};
