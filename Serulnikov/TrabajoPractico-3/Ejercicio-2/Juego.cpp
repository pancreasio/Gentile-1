#include "Juego.h"
Juego::Juego(){

}

void Juego::init(){
	_x=40;
	_y=12;
	_gameOver = false;
	_resultado = false;
	_largo = 0;
	marco(1,1,80,24);
}

bool Juego::gameOver(){
	return _gameOver;
}

void Juego::input(){
	if(_tecla=getKey(true)){
		switch(_tecla){
			case KEY_UP: _y--;// Ir arriba
				_largo++;
			break;
			case KEY_LEFT:_x--;// Ir izquierda
				_largo++;
			break;
			case KEY_RIGHT:_x++; // Ir derecha
				_largo++;
			break;
			case KEY_DOWN:_y++;// Ir abajo
				_largo++;
			break;
			case KEY_ESC:{
			_gameOver=true;
			break;
			}
		}
	}
}

void Juego::update(){
	if(!(1<_x && _x< 80 && 1<_y && _y<24)){
	_resultado = false;
	_gameOver = true;
	}

}

void Juego::draw(){
	hideCursor();
	gotoxy(_x,_y);
	cout<<'*';
}

void Juego::play(){
	init();
	while(!gameOver()){
		input();
		update();
		draw();
	}
	result();
}

void Juego::result(){
	if(_resultado){
		gotoxy(30,24);
		cout<<"ganaste!";
	}
	else{
		gotoxy(30,24);
		cout<<"perdiste!";
	}
	gotoxy(30,25);
	cout<<"game over";
}
