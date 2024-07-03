#include <iostream>
#include "Alumno.h"
#include "Persona.h"
Alumno::Alumno(string Nombre, string Apellido, string NumeroCuenta, double Mesada) : Persona(Nombre, Apellido) {
	this->NumeroCuenta = NumeroCuenta;
	this->Mesada = Mesada;
}
string Alumno::obtenerNumero() {
	return NumeroCuenta;
}
double Alumno::ingresos() const { return Mesada; }
void Alumno::imprimir() const {
	cout << "Alumno con mesada: ";
	Persona::imprimir();
	cout << " | Mesada: " << Mesada << endl;
}