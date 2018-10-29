#include "Personaje.h"	

Personaje::Personaje(){
	_vida = 1;
	_magia = 1;
}

Personaje::Personaje(int vida, int magia){
	_vida = vida;
	_magia = magia;
}

Personaje::~Personaje(){
}

bool Personaje::estaVivo(){
	bool vivo = false;
	if(_vida > 0){
		vivo = true;
	}
	return vivo;
}

int Personaje::getVida(){
return _vida;
}

int Personaje::getMagia(){
return _magia;
}

void Personaje::setVida(int vida){
	_vida = vida;
}

void Personaje::setMagia(int magia){
	_magia = magia;
}
