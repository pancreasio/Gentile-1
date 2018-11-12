/*
Fecha inicio:12/11/2018
Enunciado:
Crear el archivo Ejer-2.cpp tal que cree un juego que dibuje los asteroides y su cantidad
hasta apretar la tecla ESCAPE tal que la salida sea: <IMAGEN DE COMO SE VE EL JUEGO>
Alumno: Julián Serulnikov
*/
#include "Juego.h"
void main(){
	Juego* mainloop = new Juego();
	mainloop->play();
	delete mainloop;
	cin.get();
}