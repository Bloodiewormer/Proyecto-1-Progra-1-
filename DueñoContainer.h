#pragma once
#include "Due�o.h"
class Due�oContainer
{
private:
	Due�o** due�os;
	int cantidad;
	int capacidad;
public:
	Due�oContainer();
	~Due�oContainer();
	bool agregarDue�o(Due�o* due�o);
	Due�o* getDue�o(std::string ID);
	std::string toString() const ;
};

