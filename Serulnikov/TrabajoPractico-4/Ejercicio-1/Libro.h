#ifndef LIBRO_H
#define LIBRO_H
#include <iostream>
#include "Autor.h"
using namespace std;
class Libro{
private:
	string _nombre;
	float _precio;
	Autor* _autor;
public:
	Libro(string nombre, float precio, Autor* autor);
	void setNombre(string nombre);
	void setPrecio(float precio);
	void setAutor(Autor* autor);
	string getNombre();
	Autor* getAutor();
	float getPrecio();
	void verTodo();
};
#endif