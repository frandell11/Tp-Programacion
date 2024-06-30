#include <iostream>
#include "funciones.h"
#include "juego.h"

using namespace std;

void juego(){


int dado[6];

for(int x=0; x<3; x++){


//generar tirada//

hacerTirada(dado);

//mostrar tirada//

mostrarTirada(dado);
}
}
