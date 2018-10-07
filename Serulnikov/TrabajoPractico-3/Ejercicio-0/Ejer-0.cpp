#include "../../libreria/libreria.h"
#include <iostream>


int _x;
int _y;
int _tecla;
bool _gameOver;

void input(){

	if(_tecla=getKey(true)){
		switch(_tecla){
			case KEY_UP: _y--;// Ir arriba
			break;
			case KEY_LEFT:_x--;// Ir izquierda
			break;
			case KEY_RIGHT:_x++; // Ir derecha
			break;
			case KEY_DOWN:_y++;// Ir abajo
			break;
			case KEY_ESC:{
			_gameOver=true;
			break;
			}
		}
	}
}

void draw(){
	gotoxy(_x,_y);
	cout<<'*';
}

void ccheck(){
	if(!(1<_x && _x< 80 && 1<_y && _y<24)){
	_gameOver = true;
	}
}

void gameOverScreen(){
	gotoxy(30,24);
	cout<<"game over";
}

void juego(){
	while(!_gameOver){
	draw();
	input();
	ccheck();
	}
	gameOverScreen();
}

void main(){
	_x=40;
	_y=12;
	marco(1,1,80,24);
	juego();
	cin.get();
}