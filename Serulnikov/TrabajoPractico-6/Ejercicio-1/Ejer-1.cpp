#include "Circulo.h"
#include "../Ejercicio-0/Cuadrado.h"
#include "../Ejercicio-0/Triangulo.h"
#include <iostream>
#define TAM 3
using namespace std;
void main(){
	FiguraGeometrica* vec[TAM];
	for(int i = 0; i < TAM; i++){
		vec[i] = NULL;
	}

	vec[0] = new Cuadrado;
	vec[1] = new Triangulo;
	vec[2] = new Circulo;

	for(int i = 0; i < TAM; i++){
		if (vec[i]!=NULL){
			vec[i]->dibujar();
		}
	}

	for(int i = 0; i < TAM; i++){
		if(vec[i]!= NULL){
			delete vec[i];
			vec[i] = NULL;
		}
	}
	fflush(stdin);
	cin.get();
}