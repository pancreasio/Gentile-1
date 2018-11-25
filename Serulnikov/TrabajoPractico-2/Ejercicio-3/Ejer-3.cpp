/*fecha de inicio: 27/08

Este ejercicio cuyo proyecto llamado Ejercicio-3 deberá
completar la clase Personaje cuyo diagrama de clase es el
siguiente:
Con un atributo _color del tipo char, constructor
parametrizado, setColor y getColor y modificar el método
dibujar para que muestre el dibujo en colores utilizando la
funcion setForeColor()y los #define que se encuentran en
libreria.h (como ser COLOR_BLUE)
Recuerde que después de cambiar el color del texto este se
mantiene hasta que se vuelva a cambiar.
El destructor imprime: "adios mundo cruel!"
Probar la clase con 1 objeto Personaje compile, linkee y
pruebe el ejercicio tal que muestre lo siguiente en pantalla.

Julian Serulnikov
*/
#include <iostream>
#include <string>
#include "Personaje.h"
using namespace std;
void main(){
		bool palanca = false;
	string nombre;
	cout<<"desea crear un personaje? 1=Si, 0=no ";
	cin>>palanca;
	if(palanca){
		Personaje* p1 = new Personaje();
		p1->setColor(COLOR_BLUE);
		cout<<"Hola soy un personaje. Ingrese el nombre:";
		cin>>nombre;
		p1->dibujar();
		p1->setNombre(nombre);
		cout<<"Desea que diga el nombre?: 1=si, 0=no ";
		cin>>palanca;
		if(palanca){
			cout<<"mi nombre es "<<p1->getNombre()<<"\n";
		}
		cout<<"Desea escucharse hablar?: 1=si, 0=no ";
		cin>>palanca;
		if(palanca){
			p1->hablar();
			cout<<"\n";
		}
		cout<<"Desea que vaya a dormir?: 1=si, 0=no\n";
		cin>>palanca;
		if(palanca){
			p1->dormir();
			cout<<"\n";
		}
		delete p1;
	}
	
	fflush(stdin);
	cin.get();
}