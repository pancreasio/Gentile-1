/*fecha de inicio: 27/08

Este ejercicio cuyo proyecto se llama Ejercicio-1 deber� copiar la clase Punto del ejercicio 0 y
completarla para que tenga dos constructores, un destructor y los
m�todos mover y borrar.
El constructor por defecto(no recibe par�metros) setea los atributos x e
y en 0.
Sobrecargar el constructor (es decir, crear otro) que reciba 2 par�metros
x e y y setear los atributos con los valores de estos par�metros.
Los m�todos seteadores ahora deber�n validar que los valores de x e y
no superen los limites de la pantalla.
El m�todo mover cambia las coordenadas del punto validando que
superen los limites de la pantalla.
El m�todo borrar borra el punto de la pantalla.
Deber� crear 2 objetos cuyas coordenadas son 1,1 y 40,12 mostrarlos
por pantalla, mover el 2 objeto a la posici�n 15, 20 , mostrarlo y destruir los dos objetos.
Compile, linkee y pruebe el ejercicio tal que muestre lo siguiente en pantalla:

Julian Serulnikov
*/
#include <iostream>
#include "../../libreria/libreria.h"
#include "Punto.h"
void main(){
	Punto* p1 = new Punto(1,1);
	Punto* p2 = new Punto(40,12);
	p1->dibujar();
	p2->dibujar();
	p2->mover(15,20);
	p2->dibujar();
	delete p1;
	delete p2;
	cin.get();
}