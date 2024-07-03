#pragma once
#include <string>
using namespace std;

class Persona {
public:
	
	Persona(string NOMBRE, string Apellido);
	string obtenerNombre();
	virtual double ingresos() const = 0;
	virtual void imprimir() const; 
private:
	string Nombre, Apellido;
};
