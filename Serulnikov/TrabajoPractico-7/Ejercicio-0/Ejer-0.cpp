/*
Fecha inicio: 12/11/2018
Enunciado:
Crear un programa tal que cree dos objetos Bala y muestre la cantidad de objetos creados tal que la
salida sea:
La salida será:
la cantidad de balas creadas es:1
la cantidad de balas creadas es:2
Alumno: Julián Serulnikov
*/
#include "Bala.h"
void main(){
	Bala* b1 = new Bala(0,0);
	cout<<"la cantidad de balas creadas es: "<<b1->getCantBalas()<<endl;
	Bala* b2 = new Bala(1,1);
	cout<<"la cantidad de balas creadas es: "<<b1->getCantBalas()<<endl;
	delete b1;
	delete b2;
	fflush(stdin);
	cin.get();
}