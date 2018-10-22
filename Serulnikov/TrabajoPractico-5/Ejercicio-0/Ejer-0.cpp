/*
Fecha inicio: 8/10/2018
Alumno: Julián Serulnikov
Enunciado: Crear las clases DispElect y Televisor, Crear un programa tal que cree dos objetos Televisor con los siguientes datos:
sony: encendido canal 200 brillo 40%
sanyo: apagado canal 2 brillo 50%
Deberá usar el constructor por defecto para el objeto sony y el parametrizado para el
objeto sanyo. Mostrar para cada televisor todos los datos:
*/
#include "Televisor.h"
void main(){
	Televisor* sony = new Televisor(true,200,40);
	cout<<"sony: ";
	sony->verTodo();
	cout<<endl;
	Televisor* sanyo = new Televisor(false,1,50);
	cout<<"sanyo: ";
	sanyo->verTodo();
	cout<<endl;
	delete sony;
	delete sanyo;
	fflush(stdin);
	cin.get();
}