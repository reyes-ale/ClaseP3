
#include <iostream>
#include "Persona.h"
#include "Maestro.h"
#include "Alumno.h"
using namespace std; 

int main()
{
    Persona p("Martin", "Cuellar", Persona::TipoGenero::MASCULINO);
    cout << p.obtenerNombre() << " (";
    cout << (p.obtenerGenero() == 0 ? "Hombre" : "Mujer") << ")" << endl;

    Maestro m("Martin", "Cuellar", Persona::TipoGenero::MASCULINO, "12345");
    cout << m.obtenerNombre() << " #" << m.obtenerNumero() << " (";
    cout << (m.obtenerGenero() == 0 ? "Hombre" : "Mujer") << ")" << endl;

    Alumno a("Gabriel", "Vazquez", Persona::TipoGenero::MASCULINO, "67890");
    cout << a.obtenerNombre() << " #" << a.obtenerNumero() << " (";

    return 0; 
    
}
