#include "MascotaContainer.h"

MascotaContainer::MascotaContainer()
{
	cantidad = 0;
	capacidad = 10;//<--- Se define la capacidad de mascotas, en este caso 10
	mascotas = new Mascota * [capacidad];//Se crea un arreglo de 10 mascotas
	for (int i = 0; i < 10; i++){
		mascotas[i] = nullptr;
	}
}

MascotaContainer::~MascotaContainer()
{
	for (int i = 0; i < cantidad; i++){
		delete mascotas[i];
	}
	delete[] mascotas;
}

int MascotaContainer::getCantidad() const
{
	return cantidad;
}

bool MascotaContainer::agregarMascota(Mascota* mascota)
{
	if (cantidad < capacidad){
		mascotas[cantidad++] = mascota;
		return true;
	}
	return false;
}

Mascota* MascotaContainer::getMascota(std::string name)
{
	for (int i = 0; i < cantidad; i++){
		if (mascotas[i]->getNombre() == name){
			return mascotas[i];
		}
	}
	return nullptr;
}

std::string MascotaContainer::toString()
{
	std::stringstream ss;
	ss << "------------------------------------" << std::endl;
	ss << "Mascotas: " << std::endl;
	if (mascotas[0] == nullptr) {
		ss << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
		ss << "No tiene mascotas" << std::endl;
	}
	else {
		for (int i = 0; i < cantidad; i++) {
			if (mascotas[i] != nullptr) {
				ss << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
				ss << mascotas[i]->toString() << std::endl;
			}
		}
	}
	ss << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
	return ss.str();
}