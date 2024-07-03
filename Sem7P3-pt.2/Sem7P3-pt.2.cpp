#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class NT {
	string a, i, l;
public:
	friend ostream &operator << (ostream &o, const NT &n);
	friend istream &operator >> (istream &i, NT &n);
};
ostream& operator << (ostream& o, const NT& n) {
	o << "(" << n.a << ") " << n.i << "-" << n.l;
	return o; 
}

istream& operator >> (istream& i, NT& n) {
	i.ignore(); // ignora el inicio del parentesis
	i >> setw(3) >> n.a;
	i.ignore(2); // ignora el cierre del parentesis y el espacio
	i >> setw(4) >> n.i;
	i.ignore(); // ignora el guion en medio de los numeros
	i >> setw(4) >> n.l;
	return i; 
}

class Persona {

};

class F {
	F(int month = 1, int day = 1, int year = 1900) {
		this->month = month;
		this->day = day;
		this->day = day;
	}
	F& operator++(int) {
		day++;
		return *this;
	}
	F operator--() {
		day--;
		return *this;
	}

private:
	unsigned int month, day, year;
	friend int main();
};

void typeID() {
	int i = 65;
	char c = 70;
	float f = 3.1416;
	Persona* p = new Persona();
	Persona persona;


	cout << "tipo de nombre de int = " << typeid(int).name() << endl;
	cout << "tipo de nombre de i = " << typeid(i).name() << endl;
	cout << "tipo de nombre de char = " << typeid(char).name() << endl;
	cout << "tipo de nombre de c = " << typeid(c).name() << endl;
	cout << "tipo de nombre de float = " << typeid(float).name() << endl;
	cout << "tipo de nombre de f = " << typeid(f).name() << endl;

	cout << "tipo de nombre de Persona = " << typeid(Persona).name() << endl;
	cout << "tipo de nombre de p = " << typeid(p).name() << endl;
	cout << "tipo de nombre de persona = " << typeid(persona).name() << endl;
	if (typeid(persona) == typeid(Persona)) {
		cout << "--> Son iguales" << endl;
	}
}

void numTelefono() {
	NT t;
	cout << "Telefono en la forma (504) 3193-9169:" << endl;
	cin >> t;
	cout << "Telefono: " << t << endl;
}

int main() {
	//typeID();
	//numTelefono();
	F f;
	f++;
	cout << f.day << endl;
	--f;
	cout << f.day << endl;
	return 0; 
	
}