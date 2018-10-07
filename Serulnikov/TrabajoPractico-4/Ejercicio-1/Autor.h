#ifndef AUTOR_H
#define AUTOR_H
#include <iostream>
using namespace std;
class Autor{
private:
	string _nombre;
	int _edad;
	string _pais;
public:
	Autor();
	Autor(string nombre, int edad, string pais);
	void setNombre(string nombre);
	void setEdad(int edad);
	void setPais(string pais);
	string getNombre();
	string getPais();
	int getEdad();
	void verTodo();
};
#endif