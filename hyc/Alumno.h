#pragma once
#include <string>
#include "Persona.h"
class Alumno : public Persona {
	string NumeroCuenta;
	double Mesada;
public:
	Alumno(string Nombre, string Apellido, string NumeroCuenta, double Mesada);
	string obtenerNumero();
	virtual double ingresos() const override;
	virtual void imprimir() const override;
};