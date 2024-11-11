// BrazoRobotico.cpp
#include "BrazoRobotico.h"
#include <iostream>

BrazoRobotico::BrazoRobotico() : x(0), y(0), z(0), sujetandoObjeto(false) {}

double BrazoRobotico::getX() const { return x; }
double BrazoRobotico::getY() const { return y; }
double BrazoRobotico::getZ() const { return z; }
bool BrazoRobotico::estaSujetando() const { return sujetandoObjeto; }

void BrazoRobotico::coger() {
    if (!sujetandoObjeto) {
        sujetandoObjeto = true;
        std::cout << "Objeto cogido." << std::endl;
    } else {
        std::cout << "Ya estoy sujetando un objeto." << std::endl;
    }
}

void BrazoRobotico::soltar() {
    if (sujetandoObjeto) {
        sujetandoObjeto = false;
        std::cout << "Objeto soltado." << std::endl;
    } else {
        std::cout << "No estoy sujetando ningún objeto." << std::endl;
    }
}

void BrazoRobotico::mover(double nuevoX, double nuevoY, double nuevoZ) {
    x = nuevoX;
    y = nuevoY;
    z = nuevoZ;
    std::cout << "Brazo movido a (" << x << ", " << y << ", " << z << ")." << std::endl;
}

