#include "Libro.h"


Libro::Libro(string nombre, float precio, Autor* autor){
	_nombre = nombre;
	_precio = precio;
	_autor = autor;
}
void Libro::setNombre(string nombre){
	_nombre = nombre;
}
void Libro::setPrecio(float precio){
	_precio = precio;
}
void Libro::setAutor(Autor* autor){
	_autor=autor;
}
string Libro::getNombre(){
	return _nombre;
}
Autor* Libro::getAutor(){
	return _autor;
}
float Libro::getPrecio(){
	return _precio;
}
void Libro::verTodo(){
	cout<<"libro: "<<_nombre.c_str()<<" precio: "<<_precio<<" autor: "<<_autor->getNombre().c_str();
}