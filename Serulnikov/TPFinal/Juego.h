#ifndef JUEGO_H
#define JUEGO_H
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../libreria/libreria.h"
#include"Nave.h"
#include "Asteroide.h"
#include "Bala.h"
#include "Definiciones.h"

using namespace std;

class Juego{
	int _tecla;
	bool _gameOver;
	int _puntos;
	bool _resultado;
	Nave* _nave;
	Bala* _balas[TOPE];
	Asteroide* _asteroides[TOPE];
public:
	Juego();
	~Juego();
	void init();
	bool gameOver();
	void play();
	void input();
	void update();
	void draw();
	void result();
	void display();
};
#endif