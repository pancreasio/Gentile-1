#include "Personaje.h"
Personaje::Personaje(){
	_nombre = "sin nombre";
	_color = COLOR_WHITE;
}
Personaje::Personaje(string nombre, char color){
	_nombre = nombre;
	_color = color;
}
Personaje::~Personaje(){
	cout<<"adios mundo cruel!"<<endl;
}

void Personaje::dormir(){
	cout<<"ZZZZZZZ";
}

void Personaje::hablar(){
	cout<<"bla bla bla bla";
}

void Personaje::setNombre(string nombre){
	_nombre = nombre;
}

string Personaje::getNombre(){
	return _nombre;
}
void Personaje::setColor(char color){
	_color = color;
}

char Personaje::getColor(){
	return _color;
}

void Personaje::dibujar(){
	setForeColor(_color);
	cout<<" o\n";
	cout<<"/|\\\n";
	cout<<"/ \\\n";
	setForeColor(COLOR_WHITE);
}