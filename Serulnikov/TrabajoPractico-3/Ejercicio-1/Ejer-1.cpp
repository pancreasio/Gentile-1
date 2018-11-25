#include <iostream>
#include "Juego.h"

using namespace std;
void main(){
	Juego* mainloop = new Juego();
	mainloop->play();
	fflush(stdin);
	cin.get();
}