#include "Mago.h"

Mago::Mago(){
	_vida=4;
	_magia=15;
	_tipoVarita = 1;
}

Mago::Mago(int vida, int magia, int tipoVarita){
	_vida = vida;
	_magia = magia;
	_tipoVarita = tipoVarita;
}
Mago::~Mago(){
	cout<<"Mago muerto"<<endl;
}

void Mago::Atacar(Personaje* per){
	if(per->estaVivo()){
		per->setVida(per->getVida() - 3);
		per->setMagia(per->getMagia() - 3);
	}
}

void Mago::setTipoVarita(int tipoVarita){
	_tipoVarita = tipoVarita;
}

int Mago::getTipoVarita(){
	return _tipoVarita;
}

void Mago::verTodo(){
	cout<<"el Mago posee "<<_vida<<" vidas y "<< _magia <<" de magia"<<endl;
}