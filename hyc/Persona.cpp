#include <iostream>
#include "Persona.h"
Persona::Persona(string Nombre, string Apellido) {
	this->Nombre = Nombre;
	this->Apellido = Apellido;
}
string Persona::obtenerNombre() {
	return Nombre;
}

string Persona::obtenerApellido() {
	return Apellido;
}
void Persona::imprimir() const {
	cout << Nombre << ' ' << Apellido;
}