#include "Puerta.h"

	Puerta::Puerta(string lugar){
		_lugar = lugar;
		_abierta = false;
	}
	void Puerta::setAbierta(){
		_abierta = true;
	}
	bool Puerta::getAbierta(){
		return _abierta;
	}
	void Puerta::abrir(){
		_abierta = true;
		cout<<"se esta abriendo la puerta";
	}
	void Puerta::cerrar(){
		_abierta = false;
		cout<<"se esta cerrando la puerta";
	}