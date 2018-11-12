#include "Juego.h"

Juego::Juego(){
	// completar
}
Juego::~Juego(){
	// completar
}
void Juego::draw(){
	gotoxy(40,1);
	cout<<"asteroides: "<<Asteroide::getCantAsteroides();
	for(int i = 0; i< TOPE; i++){
		if(vecAst[i]!=NULL){
			gotoxy(vecAst[i]->getX(),vecAst[i]->getY());
			cout<<"*";
		}
	}
}
void Juego::update(){
	// se deja vacío ya que por ahora no hay lógica de juego
}
void Juego::init(){
	_tecla=' ';
	_gameOver=false;
	srand(time(0));
	
	for(int i = 0; i< TOPE; i++){
		vecAst[i] = NULL;
	}

	vecAst[0] = new Asteroide(30,5);
	vecAst[1] = new Asteroide(25,7);
	vecAst[2] = new Asteroide(23,12);
}

void Juego::play(){
	init();
	hideCursor();
	marco(1,2,80,24);
	while(!gameOver()){
		input();
		update();
		draw();
		miliSleep(100);
	}
	result();
}

void Juego::result(){
	if(_gameOver){
		gotoxy(30,25);
		cout<<"game over";
	}
}

void Juego::input(){
	if(_tecla=getKey(false)){
		switch(_tecla){
		case KEY_ESC:{
			_gameOver=true;
			break;
					 }
		}
	}
}

bool Juego::gameOver(){
	return _gameOver;
}