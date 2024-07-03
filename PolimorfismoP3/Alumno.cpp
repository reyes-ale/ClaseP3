#include <iostream>
#include "Alumno.h"
#include "Persona.h"

Alumno::Alumno(string Nombre, string Apellido, string NumeroCuenta, double mesada) : Persona(Nombre, Apellido) {
	this->NumeroCuenta = NumeroCuenta;
	this->mesada = mesada; 
}

string Alumno::obtenerNumero() {
	return NumeroCuenta;
}

double Alumno::ingresos() const{
	return mesada;
}

void Alumno::imprimir() const {
	cout << "Alumno con mesada: ";
	Persona::imprimir();
	cout << " | Mesada: " << mesada << endl; 
}
