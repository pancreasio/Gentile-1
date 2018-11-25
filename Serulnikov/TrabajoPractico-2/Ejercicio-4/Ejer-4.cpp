/*fecha de inicio: 27/08

Este ejercicio cuyo proyecto llamado Ejercicio-4 deberá
completar la clase Personaje con el método dibujar
sobrecargado tal que el dibujo salga en la posición x, y
recibida por parámetro. Deberá esconder el curso con el
método hideCursor().
Probar la clase con un array de 5 personajes compile, linkee y
pruebe el ejercicio tal que muestre lo siguiente en pantalla.

Julian Serulnikov
*/
#include <iostream>
#include "Personaje.h"
using namespace std;

void main(){
	Personaje* pa[5];
	for(int i = 0; i<5; i++){
		pa[i] = new Personaje();
	}
	pa[0]->setColor(COLOR_BLUE);
	pa[1]->setColor(COLOR_GREEN);
	pa[2]->setColor(COLOR_CYAN);
	pa[3]->setColor(COLOR_RED);
	pa[4]->setColor(COLOR_MAGENTA);

	for(int i = 0; i<5; i++){
		pa[i]->dibujar(60, (i+1)*3);
	}
	for(int i = 0; i<5; i++){
		pa[i] = NULL;
	}
	fflush(stdin);
	cin.get();
}