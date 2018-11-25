#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <string>
#include <iostream>
#include "../../libreria/libreria.h"
using namespace std;
class Personaje{
private:
	string _nombre;
	char _color;
public:
	Personaje();
	Personaje(string nombre, char color);
	~Personaje();
	void dormir();
	void hablar();
	void setNombre(string nombre);
	string getNombre();
	void setColor(char color);
	char getColor();
	void dibujar(int x, int y);
};
#endif