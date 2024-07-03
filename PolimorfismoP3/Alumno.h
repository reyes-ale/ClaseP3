#pragma once
#include <string>
#include "Persona.h"

class Alumno : public Persona {
	string NumeroCuenta;
	double mesada;
public:
	Alumno(string Nombre, string Apellido, string NumeroCuenta, double mesada);
	string obtenerNumero();
	virtual double ingresos() const override;
	virtual void imprimir() const override;
};
