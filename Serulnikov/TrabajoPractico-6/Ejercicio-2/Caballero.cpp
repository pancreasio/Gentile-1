#include "Caballero.h"

Caballero::Caballero(){
	_vida=5;
	_magia=2;
	_rango = 3;
}

Caballero::Caballero(int vida, int magia, int rango){
	_vida = vida;
	_magia = magia;
	_rango = rango;
}
Caballero::~Caballero(){
	cout<<"caballero muerto"<<endl;
}

void Caballero::Atacar(Personaje* per){
	if(per->estaVivo()){
		per->setVida(per->getVida() - 6);
	}
}

void Caballero::setRango(int rango){
	_rango = rango;
}

int Caballero::getRango(){
	return _rango;
}

void Caballero::verTodo(){
	cout<<"el caballero posee "<<_vida<<" vidas y "<< _magia <<" de magia"<<endl;
}