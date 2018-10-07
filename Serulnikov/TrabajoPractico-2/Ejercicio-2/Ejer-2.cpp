#include "Personaje.h"
#include <iostream>
using namespace std;

void main(){
	bool palanca = false;
	string nombre;
	cout<<"desea crear un personaje? 1=Si, 0=no ";
	cin>>palanca;
	if(palanca){
		Personaje* p1 = new Personaje();
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