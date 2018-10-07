#include "Rueda.h"
Rueda::Rueda(){
	_psi = 18;
}
void Rueda::inflar(int psi){
	_psi += psi;
}
int Rueda::presion(){
	return _psi;
}