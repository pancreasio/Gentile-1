#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <string>
#include <iostream>
using namespace std;
class Personaje{
private:
	string _nombre;
public:
	Personaje();
	void dormir();
	void hablar();
	void setNombre(string nombre);
	string getNombre();
	void dibujar();
};
#endif