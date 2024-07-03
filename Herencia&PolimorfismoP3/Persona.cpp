#include "Persona.h"

Persona::Persona(string Nombre, string Apellido, TipoGenero Genero) {
	this->Nombre = Nombre;
	this->Apellido = Apellido;
	this->Genero = Genero;

}

string Persona::obtenerNombre() {
	return Nombre;
}

string Persona::obtenerNombreCompleto()
{
	return Nombre + " " + Apellido;
}

Persona::TipoGenero Persona::obtenerGenero() {
	return Genero;
}
