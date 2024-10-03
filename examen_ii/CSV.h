#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Hecho por el Desarrollador PasivoAgresivo, AlegreTriste, Controversial
class CSV {
	// Almacena los nombres de los campos que estan en la fila cero
	vector<string> fields;
	// Almacena las filas completas, aun con las comas...
	vector<string> rows;
	// Llena el vector de 'fields' con cada nombre de la columna del registro 0
	void setFields(string);
	// Obtiene el valor del campo de la cadena usando el número de columna
	string getField(string, int);
public:
	// Lista los nombres de los campos, se usa para verificar setFields
	void ListFields();
	// Llena el vector de 'rows' con cada registro que se le envia, aquí
	// se decide si se debe usar setFields...
	void AddRow(string, int);
	// Lista los datos en formato CSV
	void ListCSV();
	// Lista los datos en formato XML
	void ListXML();
};

