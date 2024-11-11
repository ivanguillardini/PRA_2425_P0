#ifndef BRAZOROBOTICO_H
#define BRAZOROBOTICO_H

class BrazoRobotico {
	private:
    		double x, y, z; //coordenadas
		bool sujetandoObjeto; //saber si esta sujetando o no

public:
    //constructor
    BrazoRobotico();

    //metodos consultores
    double getX() const;
    double getY() const;
    double getZ() const;
    bool estaSujetando() const;

    //metodos de  acción
    void coger();
    void soltar();
    void mover(double nuevoX, double nuevoY, double nuevoZ);
};

#endif

