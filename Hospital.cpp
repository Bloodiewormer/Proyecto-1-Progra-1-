#include "Hospital.h"

Hospital::Hospital()
{
	this->especialidades = new EspecialidadContainer();
	this->doctores = new DoctorContainer();
	this->due�os = new Due�oContainer();
}

Hospital::~Hospital()
{
	delete this->especialidades;
	delete this->doctores;
	delete this->due�os;
}

bool Hospital::agregarEspecialidad(std::string name){
	Especialidad* especialidad = new Especialidad(name);
	if (especialidades->agregarEspecialidad(especialidad) == true){
		return true;
	}
	return false;
}

std::string Hospital::mostrarEspecialidades()
{
	return especialidades->toString();
}

bool Hospital::agregarDoctor(std::string nom,std::string ID,std::string esp)
{
	Especialidad* especialidadObj = especialidades->getEspecialidad(esp);
	if (especialidadObj == nullptr){
		return false;
	}
	else {
		Doctor* doctor = new Doctor(nom, ID, especialidadObj);
		if (doctores->agregarDoctor(doctor) == true){
			return true;
		}
		return false;
	}
}


bool Hospital::agregarDue�o(std::string nombre, std::string ID)
{
	if (due�os->getDue�o(ID) == nullptr){
		Due�o* due�o = new Due�o(nombre, ID);
		due�os->agregarDue�o(due�o);
		return true;
	}
	return false;
}

std::string Hospital::mostrarDue�osCM() // CM /Con Mascotas
{
	return due�os->toString();
}

bool Hospital::agregarMascota(std::string nombre, std::string especie, std::string raza, int edad,std::string DuennoId)
{
	Due�o* due�o = due�os->getDue�o(DuennoId);
	if (due�o != nullptr){
		Mascota* mascota = new Mascota(nombre, especie, raza, edad);
		if (due�o->agregarMascota(mascota)){
			return true;
		}
		return false;
	}
	else{
		return false;	
	}
}

Especialidad* Hospital::getEspecialidad(std::string name)
{
	if (especialidades->getEspecialidad(name) != nullptr){
		return especialidades->getEspecialidad(name);
	}
	return nullptr;
	
}

Doctor* Hospital::getDoctor(std::string ID)
{
	if (doctores->getDoctor(ID) != nullptr){
		return doctores->getDoctor(ID);
	}
	return nullptr;
}

Doctor** Hospital::getDoctoresPE(Especialidad* especialidad, int& cont)
{
	return doctores->getDoctoresPE(especialidad, cont);
}

Doctor** Hospital::getDoctores()
{
	return doctores->getDoctores();
}

int Hospital::getCantidaddeDoc() const
{
	return doctores->getCantidad();
}

Due�o* Hospital::getDue�o(std::string ID)
{
	if (due�os->getDue�o(ID) != nullptr){
		return due�os->getDue�o(ID);
	}
	return nullptr;
}

//Metodos de prueba
void Hospital::datosPrueba()//Eliminar antes de entregar
{
	//datos quemados
	//Especialidades
	Especialidad* especialidad1 = new Especialidad("Cardiologia");
	Especialidad* especialidad2 = new Especialidad("Dermatologia");
	Especialidad* especialidad3 = new Especialidad("Oftalmologia");
	especialidades->agregarEspecialidad(especialidad1);
	especialidades->agregarEspecialidad(especialidad2);
	especialidades->agregarEspecialidad(especialidad3);

	//Doctores
	Doctor* doctor1 = new Doctor("Juan", "123", especialidad1);
	Doctor* doctor2 = new Doctor("Pedro", "456", especialidad2);
	Doctor* doctor3 = new Doctor("Maria", "789", especialidad3);
	Doctor* doctor4 = new Doctor("Luis", "101", especialidad1);
	Doctor* doctor5 = new Doctor("Ana", "112", especialidad2);
	Doctor* doctor6 = new Doctor("Carlos", "131", especialidad3);
	doctores->agregarDoctor(doctor1);
	doctores->agregarDoctor(doctor2);
	doctores->agregarDoctor(doctor3);
	doctores->agregarDoctor(doctor4);
	doctores->agregarDoctor(doctor5);
	doctores->agregarDoctor(doctor6);

	//Due�os
	Due�o* due�o1 = new Due�o("David", "321");
	Due�o* due�o2 = new Due�o("Brandon", "654");
	Due�o* due�o3 = new Due�o("Maria", "987");
	due�os->agregarDue�o(due�o1);
	due�os->agregarDue�o(due�o2);
	due�os->agregarDue�o(due�o3);

	//Mascotas
	Mascota* mascota1 = new Mascota("Firulais", "Perro", "Labrador", 5);
	Mascota* mascota2 = new Mascota("Mishi", "Gato", "Siames", 3);
	Mascota* mascota3 = new Mascota("Piolin", "Canario", "Amarillo", 1);
	Mascota* mascota4 = new Mascota("Epona", "Caballo", "Blanco", 7);
	Mascota* mascota5 = new Mascota("Nemo", "Pez", "Payaso", 2);
	Mascota* mascota6 = new Mascota("Tweety", "Canario", "Amarillo", 1);
	Mascota* mascota7 = new Mascota("Pikachu", "Raton", "Amarillo", 3);
	due�o1->agregarMascota(mascota1);
	due�o2->agregarMascota(mascota2);
	due�o2->agregarMascota(mascota3);
	due�o1->agregarMascota(mascota4);
	due�o2->agregarMascota(mascota5);
	due�o2->agregarMascota(mascota6);
	due�o1->agregarMascota(mascota7);

	//Citas
	Cita* cita1 = new Cita(mascota1, due�o1);//Firulais, David
	Cita* cita2 = new Cita(mascota2, due�o2);//Mishi, Brandon
	Cita* cita3 = new Cita(mascota3, due�o2);//Piolin, Brandon
	Cita* cita4 = new Cita(mascota4, due�o1);//Epona, David
	Cita* cita5 = new Cita(mascota5, due�o2);//Nemo, Brandon
	Cita* cita6 = new Cita(mascota6, due�o2);//Twetty, Brandon
	Cita* cita7 = new Cita(mascota7, due�o1);//Pikachu, Brandon
	Cita* cita8 = new Cita(mascota1, due�o1);//Firulais, David
	Cita* cita9 = new Cita(mascota2, due�o2);//Mishi, Brandon
	Cita* cita10 = new Cita(mascota3, due�o2);//Piolin, Brandon
	doctor4->agendarCita(cita1, 0, 8);//0=Lunes, 8=8am
	doctor2->agendarCita(cita2, 1, 9);//1=Martes, 9=9am
	doctor3->agendarCita(cita3, 2, 10);//2=Miercoles, 10=10am
	doctor1->agendarCita(cita4, 3, 11);//3=Jueves, 11=11am
	doctor5->agendarCita(cita5, 4, 12);//4=Viernes, 12=12pm
	doctor6->agendarCita(cita6, 5, 13);//5=Sabado, 13=1pm
	doctor1->agendarCita(cita7, 0, 14);//0=Lunes, 14=2pm
	doctor4->agendarCita(cita8, 1, 15);//1=Martes, 15=3pm
	doctor2->agendarCita(cita9, 2, 16);//2=Miercoles, 16=4pm
	doctor1->agendarCita(cita10, 3, 17);//3=Jueves, 17=5pm
}