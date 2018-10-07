#include "Autor.h"

Autor::Autor(){
	_nombre = "anonimo";
	_edad = 0;
	_pais = "desconocido";
}
Autor::Autor(string nombre, int edad, string pais){
	_nombre = nombre;
	_edad = edad;
	_pais = pais;
}
void Autor::setNombre(string nombre){
	_nombre = nombre;
}
void Autor::setEdad(int edad){
	_edad = edad;
}
void Autor::setPais(string pais){
	_pais=pais;
}
string Autor::getNombre(){
	return _nombre;
}
string Autor::getPais(){
	return _pais;
}
int Autor::getEdad(){
	return _edad;
}
void Autor::verTodo(){
	cout<<"nombre: "<<_nombre.c_str()<<" edad: "<<_edad<<" pais: "<<_pais.c_str();
}