#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <iostream>
using namespace std;
class Personaje{
private:
	string _nombre;
	int _edad;
public:
	Personaje();
	Personaje(string nombre, int edad);
	~Personaje();
	void setNombre(string nombre);
	void setEdad(char edad);
	string getNombre();
	int getEdad();
	void verTodo();
};
#endif