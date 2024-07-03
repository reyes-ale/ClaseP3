#include "Alumno.h"
#include "Persona.h"

Alumno::Alumno(string Nombre, string Apellido, Persona::TipoGenero Genero, string NumeroCuenta) : Persona(Nombre, Apellido, Genero) {
	this->NumeroCuenta = NumeroCuenta;
}

string Alumno::obtenerNumero() {
	return NumeroCuenta; 
}

