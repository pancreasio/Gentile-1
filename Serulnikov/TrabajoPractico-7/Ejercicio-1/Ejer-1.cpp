/*
Fecha Inicio:12/11/2018
Enunciado:
Crear un programa tal que 3 objetos de clase Asteroide tal que la salida sea:
La cantidad de asteroides creados es:3
Borramos una instancia y ahora existen 2 instancias a la clase Asteroide
Borramos una instancia y ahora existen 1 instancias a la clase Asteroide
Existen 0 instancias a la clase Asteroide 
Alumno: Julián Serulnikov
*/
#include "Asteroide.h"
void main(){
	Asteroide* a0 = new Asteroide(0,0);
	Asteroide* a1 = new Asteroide(1,1);
	Asteroide* a2 = new Asteroide(2,2);
	cout<<"La cantidad de asteroides creados es: "<<Asteroide::getCantAsteroides()<<endl;
	delete a2;
	cout<<"Borramos una instancia y ahora existen "<<Asteroide::getCantAsteroides()<<" instancias a la clase Asteroide"<<endl;
	delete a1;
	cout<<"Borramos una instancia y ahora existen "<<Asteroide::getCantAsteroides()<<" instancias a la clase Asteroide"<<endl;
	delete a0;
	cout<<"Existen "<<Asteroide::getCantAsteroides()<<" instancias a la clase Asteroide"<<endl;

	fflush(stdin);
	cin.get();
}