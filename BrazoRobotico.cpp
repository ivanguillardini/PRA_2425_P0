#include "BrazoRobotico.h"
#include <iostream>
using namespace std;
BrazoRobotico::BrazoRobotico() : x(0), y(0), z(0), sujetandoObjeto(false) {}
//formas para obtener coordenas :
double BrazoRobotico::getX() const{
       	return x;
}
double BrazoRobotico::getY() const{
       	return y;
}
double BrazoRobotico::getZ() const{
       	return z;
}
bool BrazoRobotico::estaSujetando() const{
       	return sujetandoObjeto;
}

void BrazoRobotico::coger() {
	if (!sujetandoObjeto) {
        	sujetandoObjeto = true;
        	cout << "el brazo ya tiene el objeto cogido" << endl;
    	} else {
        	cout << "el brazo ya esta sujetando un objeto" << endl;
    	}
}

void BrazoRobotico::soltar() {
	if (sujetandoObjeto) {
        	sujetandoObjeto = false;
       	 	cout << "el brazo ha soltado el objeto" << endl;
    	} else {
        	cout << "el brazo no esta sujetando ningún objeto" << endl;
    	}
}

void BrazoRobotico::mover(double nuevoX, double nuevoY, double nuevoZ) {
    	x = nuevoX;
   	y = nuevoY;
    	z = nuevoZ;
    	cout << "brazo se ha movido a la posicion (" << x << ", " << y << ", " << z << ")." << endl;
}

