#include "Personaje.h"
Personaje::Personaje(){
	_nombre = "sin nombre";
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

void Personaje::dibujar(){
	cout<<" o\n";
	cout<<"/|\\\n";
	cout<<"/ \\\n";
}