#include "Contacto.h"
using namespace std;

Contacto::Contacto(const string&Tel, const string&Nom, const int Id) {
	establecerTelefono(Tel);
	establecerNombre(Nom);
	id = Id;
}

void Contacto::establecerTelefono(const string&Telefono) {
	copiar_cadena(Telefono, telefono, 15);
}

string Contacto::obtenerTelefono() const {
	return telefono;
}

void Contacto::establecerNombre(const string&Nombre) {
	copiar_cadena(Nombre, nombre, 50);
}

string Contacto::obtenerNombre() const {
	return nombre;
}

void Contacto::establecerId(const int Id) {
	id = Id;
}

int Contacto::obtenerId() const {
	return id;
}

void copiar_cadena(const string Cadena, char cadena[], int long_max) {
	int longitud = Cadena.size();
	longitud = (longitud < long_max ? longitud : long_max - 1);
	Cadena.copy(cadena, longitud);
	cadena[longitud] = '\0';
}
