#include "Mago.h"
Mago::Mago(){
	_tipoVarita = 0;
}

Mago::Mago(string nombre, int edad, int tipoVarita):Personaje(nombre, edad){
	_tipoVarita = tipoVarita;
}

Mago::~Mago(){

}

void Mago::setTipoVarita(int tipoVarita){
	_tipoVarita = tipoVarita;
}

int Mago::getTipoVarita(){
	return _tipoVarita;
}

void Mago::verTodo(){
	Personaje::verTodo();
	cout<<" y es de tipo ";
	switch(_tipoVarita){
	case 1:
		cout<<"principiante";
		break;
	case 2:
		cout<<"avanzado";
		break;
	case 3:
		cout<<"maestro";
		break;
	default:
		cout<<"varita rota";
		break;
	}
}