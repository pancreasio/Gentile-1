/*
Fecha inicio: 8/10/2018
Alumno: Julián Serulnikov
Enunciado: Crear las clases Personaje y Mago según los siguientes diagramas:
Reutilizar la clase Personaje tal que contenga un nombre y una edad.
Tendrá además 2 constructores y los setters y getters correspondientes y verTodo.
Crear la clase Mago que hereda de Personaje y posea un atributo int _tipoVarita
validando que sus valores solo pueden ser (1 principiante, 2 avanzado 3 maestro).
Deberá tener 2 constructores, un destructor,los setters, getters correspondientes y verTodo.
Crear el archivo Ejer-2.cpp tal que pruebe la clase Mago con un objeto usando el constructor
por defecto y con un objeto usando el constructor parametrizado.
*/
#include "Mago.h"
void main(){
	Mago* merlin = new Mago("Merlin", 180, 3);
	Mago* oz = new Mago("Oz", 100, 2);
	cout<<"El mago ";
	merlin->verTodo();
	cout<<endl;
	cout<<"El mago ";
	oz->verTodo();
	delete merlin;
	delete oz;
	fflush(stdin);
	cin.get();
}