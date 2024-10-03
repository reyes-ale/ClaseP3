#include <fstream>
#include <iomanip>
#include "CSV.h"

void CSV::setFields(string line) {
    string temp = "";
    for (int i = 0; i < line.size(); i++)
    {
        if (line[i] != ',') {
            temp += line[i];
        }
        else {
            fields.push_back(temp);
            temp = "";
        }

        if (i == line.size() - 1) {
            fields.push_back(temp);
            temp = "";
        }
    }
    //ListFields();
    
}

string CSV::getField(string line, int fieldNum){
    string temp;
    string lineaSinComas;
    string tempOtro;
    vector<string> comillas;
    vector<string> tempVector;

    for (int i = 0; i < line.size(); i++) {
        if (line[i]!='"') {
            tempOtro += line[i];
        }
        else {
            tempOtro += " ";
            comillas.push_back(tempOtro);
            tempOtro = "";
        }

        if (i==line.size()-1) {
            comillas.push_back(tempOtro);
            tempOtro = "";
        }
    }
    for (int i = 0; i < comillas[1].size(); i++) {
        if (comillas[1][i] == ',') {
            comillas[1][i] = ' ';
        }
    }

    for (string cosa : comillas) {
        lineaSinComas += cosa;
    }

    for (int i = 0; i < lineaSinComas.size(); i++) {
        if (lineaSinComas[i] != ',') {
            temp += lineaSinComas[i];
        }
        else {
            tempVector.push_back(temp);
            temp = "";
        }
        if (i == lineaSinComas.size() - 1) {
            tempVector.push_back(temp);
            temp = "";
        }
    }
    return tempVector[fieldNum];
}

void CSV::ListFields() {
	for (string field : fields) {
		cout << field << endl;
	}
}

void CSV::AddRow(string line, int numLine) {
    if (numLine==0) {        
        setFields(line);
    } else {
        rows.push_back(line);
    }
}

void CSV::ListCSV() {
    cout << "CSV: \n\n";
    string linea;
    
    ifstream archivoEntrada("cars.csv", ios::in);
    if (archivoEntrada.is_open()) {
        while (!archivoEntrada.eof()) {
            getline(archivoEntrada, linea);            
            cout << linea << endl;            
        }
        archivoEntrada.close();
    }
    else {
        cerr << "No se pudo abrir el archivo para lectura." << endl;
    }
    cout << endl;
   
}

void CSV::ListXML(){
    cout << "XML: \n\n";
    cout << "<cars>" << endl;
    for (int i = 0; i < rows.size(); i++) {
        cout << "    " << "<car>" << endl;
        for (int j = 0; j < fields.size(); j++) {
            cout << "        " << "<" << fields[j] << ">" << getField(rows[i], j) << "</" << fields[j] << ">" << endl;
        }
        cout << "    " << "</car>" << endl;
    }
    cout << "</cars>";
}
