#include <iostream>
#include "Maestro.h"
#include "Persona.h"
Maestro::Maestro(string Nombre, string Apellido, string NumeroTalentoHumano, double Salario) : Persona(Nombre, Apellido) {
	this->NumeroTalentoHumano = NumeroTalentoHumano;
	this->Salario = Salario;
}
string Maestro::obtenerNumero() {
	return NumeroTalentoHumano;
}
double Maestro::ingresos() const {
	return Salario;
}
void Maestro::imprimir() const {
	cout << "Empleado asalariado: ";
	Persona::imprimir();
	cout << " | Salario: " << Salario << endl;
}