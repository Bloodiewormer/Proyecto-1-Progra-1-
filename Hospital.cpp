#include "Hospital.h"

Hospital::Hospital()
{
	this->especialidades = new EspecialidadContainer();
	this->doctores = new DoctorContainer();
	this->dueños = new DueñoContainer();
}

Hospital::~Hospital()
{
	delete this->especialidades;
	delete this->doctores;
	delete this->dueños;
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


bool Hospital::agregarDueño(std::string nombre, std::string ID)
{
	if (dueños->getDueño(ID) == nullptr){
		Dueño* dueño = new Dueño(nombre, ID);
		dueños->agregarDueño(dueño);
		return true;
	}
	return false;
}

std::string Hospital::mostrarDueñosCM() // CM /Con Mascotas
{
	return dueños->toString();
}

bool Hospital::agregarMascota(std::string nombre, std::string especie, std::string raza, int edad,std::string DuennoId)
{
	Dueño* dueño = dueños->getDueño(DuennoId);
	if (dueño != nullptr){
		Mascota* mascota = new Mascota(nombre, especie, raza, edad);
		if (dueño->agregarMascota(mascota)){
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

Dueño* Hospital::getDueño(std::string ID)
{
	if (dueños->getDueño(ID) != nullptr){
		return dueños->getDueño(ID);
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

	//Dueños
	Dueño* dueño1 = new Dueño("David", "321");
	Dueño* dueño2 = new Dueño("Brandon", "654");
	Dueño* dueño3 = new Dueño("Maria", "987");
	dueños->agregarDueño(dueño1);
	dueños->agregarDueño(dueño2);
	dueños->agregarDueño(dueño3);

	//Mascotas
	Mascota* mascota1 = new Mascota("Firulais", "Perro", "Labrador", 5);
	Mascota* mascota2 = new Mascota("Mishi", "Gato", "Siames", 3);
	Mascota* mascota3 = new Mascota("Piolin", "Canario", "Amarillo", 1);
	Mascota* mascota4 = new Mascota("Epona", "Caballo", "Blanco", 7);
	Mascota* mascota5 = new Mascota("Nemo", "Pez", "Payaso", 2);
	Mascota* mascota6 = new Mascota("Tweety", "Canario", "Amarillo", 1);
	Mascota* mascota7 = new Mascota("Pikachu", "Raton", "Amarillo", 3);
	dueño1->agregarMascota(mascota1);
	dueño2->agregarMascota(mascota2);
	dueño2->agregarMascota(mascota3);
	dueño1->agregarMascota(mascota4);
	dueño2->agregarMascota(mascota5);
	dueño2->agregarMascota(mascota6);
	dueño1->agregarMascota(mascota7);

	//Citas
	Cita* cita1 = new Cita(mascota1, dueño1);//Firulais, David
	Cita* cita2 = new Cita(mascota2, dueño2);//Mishi, Brandon
	Cita* cita3 = new Cita(mascota3, dueño2);//Piolin, Brandon
	Cita* cita4 = new Cita(mascota4, dueño1);//Epona, David
	Cita* cita5 = new Cita(mascota5, dueño2);//Nemo, Brandon
	Cita* cita6 = new Cita(mascota6, dueño2);//Twetty, Brandon
	Cita* cita7 = new Cita(mascota7, dueño1);//Pikachu, Brandon
	Cita* cita8 = new Cita(mascota1, dueño1);//Firulais, David
	Cita* cita9 = new Cita(mascota2, dueño2);//Mishi, Brandon
	Cita* cita10 = new Cita(mascota3, dueño2);//Piolin, Brandon
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