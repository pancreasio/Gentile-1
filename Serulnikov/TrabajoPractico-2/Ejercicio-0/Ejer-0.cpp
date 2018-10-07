/*fecha de inicio: 27/08

Generar la clase Punto detallada en las 
paginas 17 y 18 del apunte e implementarla.
Deberá probarla con un programa que cree 2 objetos cuyas
coordenadas serán 1,1 y 40,12 los muestre con un "*" y luego
los destruya.

Julian Serulnikov
*/
#include <iostream>
#include "../../libreria/libreria.h"
#include "Punto.h"
using namespace std;

void main(){
	Punto* punto1 = new Punto;
	punto1->setX(1);
	punto1->setY(1);

	Punto* punto2 = new Punto;
	punto2->setX(40);
	punto2->setY(12);

	punto1->dibujar();
	punto1->mostrar();
	punto2->dibujar();
	punto2->mostrar();

	delete punto1;
	delete punto2;
	cin.get();
}