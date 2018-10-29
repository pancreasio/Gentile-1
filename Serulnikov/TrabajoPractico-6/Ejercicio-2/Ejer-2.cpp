#include "Arquero.h"
#include "Caballero.h"
#include "Mago.h"
#include <iostream>
#define PARTYSIZE 3
using namespace std;

void main(){
	Personaje* party[PARTYSIZE];
	for (int i=0; i<PARTYSIZE; i++){
		party[i]=NULL;
	}

	party[0] = new Caballero;
	party[1] = new Arquero;
	party[2] = new Mago;

	for (int i=0; i<PARTYSIZE; i++){
		party[i]->verTodo();
	}

	for (int i=0; i<PARTYSIZE; i++){
		if(party[i]!=NULL){
		delete party[i];
		party[i] = NULL;
		}
	}
	fflush(stdin);
	cin.get();
}