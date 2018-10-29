#include "Arquero.h"

Arquero::Arquero(){
	_vida=3;
	_magia=5;
	_tipoArco = 'm';
}

Arquero::Arquero(int vida, int magia, char tipoArco){
	_vida = vida;
	_magia = magia;
	_tipoArco = tipoArco;
}
Arquero::~Arquero(){
	cout<<"Arquero muerto"<<endl;
}

void Arquero::Atacar(Personaje* per){

	if(per->estaVivo()){
		per->setVida(per->getVida() - 2);
		per->setMagia(per->getMagia() - 4);
	}
}

void Arquero::setTipoArco(char tipoArco){
	_tipoArco = tipoArco;
}

char Arquero::getTipoArco(){
	return _tipoArco;
}

void Arquero::verTodo(){
	cout<<"el Arquero posee "<<_vida<<" vidas y "<< _magia <<" de magia"<<endl;
}