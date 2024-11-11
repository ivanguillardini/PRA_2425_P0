#include "BrazoRobotico.h"
#include <iostream>

int main() {
    BrazoRobotico brazo;

    brazo.mover(5.0, 10.0, 15.0);
    brazo.coger();
    brazo.soltar();

    return 0;
}

