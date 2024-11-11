// BrazoRobotico.h
#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
private:
    double x, y, z;        // Coordenadas de la extremidad del robot en el espacio 3D
    bool sujetandoObjeto;  // Indica si está sujetando un objeto

public:
    // Constructor
    BrazoRobotico();

    // Métodos consultores
    double getX() const;
    double getY() const;
    double getZ() const;
    bool estaSujetando() const;

    // Métodos de acción
    void coger();
    void soltar();
    void mover(double nuevoX, double nuevoY, double nuevoZ);
};

#endif

