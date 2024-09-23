#pragma once
#include "Dueño.h"
class DueñoContainer
{
private:
	Dueño** dueños;
	int cantidad;
	int capacidad;
public:
	DueñoContainer();
	~DueñoContainer();
	bool agregarDueño(Dueño* dueño);
	Dueño* getDueño(std::string ID);
	std::string toString() const ;
};

