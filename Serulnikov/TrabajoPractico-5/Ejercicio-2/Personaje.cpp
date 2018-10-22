#include "Personaje.h"
Personaje::Personaje(){
	_nombre = "sin nombre";
	_edad = 0;
}

Personaje::Personaje(string nombre, int edad){
	_nombre = nombre;
	_edad = edad;
}

Personaje::~Personaje(){

}

void Personaje::setNombre(string nombre){
	_nombre = nombre;
}

void Personaje::setEdad(char edad){
	_edad = edad;
}

int Personaje::getEdad(){
	return _edad;
}

void Personaje::verTodo(){
	cout<<_nombre.c_str()<<" tiene "<<_edad<<" anios";
}