#pragma once
#include <string>
#include "Persona.h"
class Maestro : public Persona
{
	string NumeroTalentoHumano;
public:
	Maestro(string Nombre, string Apellido, Persona::TipoGenero Genero, string NumeroTalentoHumano);
	string obtenerNumero(); 
};

