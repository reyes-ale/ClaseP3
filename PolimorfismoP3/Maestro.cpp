#include <iostream>
#include "Maestro.h"
#include "Persona.h"

Maestro::Maestro(string Nombre, string Apellido,  string NumeroTalentoHumano, double salario) : Persona(Nombre, Apellido) {
	this->NumeroTalentoHumano = NumeroTalentoHumano;
	this->salario = salario;
}

string Maestro::obtenerNumero() {
	return NumeroTalentoHumano;
}

double Maestro::ingresos() const{
	return salario;
}

void Maestro::imprimir() const {
	cout << "Empleado asalariado: ";
	Persona::imprimir();
	cout << " | Salario: " << salario << endl;
}
