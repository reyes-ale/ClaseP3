#include "Maestro.h"
#include "Persona.h"

Maestro::Maestro(string Nombre, string Apellido, Persona::TipoGenero Genero, string NumeroTalentoHumano) : Persona(Nombre, Apellido, Genero) {
	this->NumeroTalentoHumano = NumeroTalentoHumano;
}

string Maestro::obtenerNumero() {
	return NumeroTalentoHumano; 
}
