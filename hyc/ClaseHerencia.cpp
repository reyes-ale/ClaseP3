#include <iostream>
#include "Persona.h"
#include "Maestro.h"
#include "Alumno.h"
#include <vector>

using namespace std;

int main() {

	//Requisitos para usar Dynamic_Cast:
	/*- Polimorfismo: El tipo base de la jerarquía de clases debe tener al menos una función virtual
	  - Herencia: Debe existir una relación de herencia entre los tipos involucrados en la conversión.
	*/

	// Sintaxis: dynamic_cast<new_type>(expression)

	/* Esto significa
	new_type: El tipo al que quieres convertir.

	expression: El puntero o referencia que deseas convertir.
	*/

	//Ejemplos con las clases que estamos usando

	//En este si deberia funcionar porque estas haciendo downcasting (castear de una clase padre a una clase hija)
	Persona* p1 = new Maestro("Martin", "Cuellar", "12345", 1500); //Objeto de tipo padre o sea Persona
	Maestro* m1 = dynamic_cast<Maestro*>(p1);						// a un objeto de tipo hijo, o sea Maestro
	if(m1)
		cout<<"Funciona"<<endl;
	else
		cout << "No funciona" << endl;

	//Este no deberia funcionar porque queres castear de una clase hija a otra clase hija
	Alumno* a2 = new Alumno("Gabriel", "Vasquez", "67890", 100);	//De una clase hija Alumno
	Maestro* m2 = dynamic_cast<Maestro*>(a2);						//A una clase hija Maestro

	if(m2)
		cout<<"Funciona"<<endl;
	else
		cout << "No funciona" << endl;

	//Este si deberia funcionar porque queres hacer upcasting (castear de una clase hija a una clase padre)
	Alumno* a3 = new Alumno("Gabriel", "Vasquez", "67890", 100);	//De una clase hija Alumno
	Persona* p3 = dynamic_cast<Persona*>(a3);						//A una clase padre Persona

	if(p3)
		cout<<"Funciona"<<endl;
	else
		cout << "No funciona" << endl;


	delete p1;
	delete m1;
	delete a2;
	delete m2;
	delete a3;
	delete p3;
	return 0;
	
	

}