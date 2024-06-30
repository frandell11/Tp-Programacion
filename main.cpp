#include <iostream>
#include <cTime>
#include "funciones.h"
#include "juego.h"

using namespace std;

int main(){

srand(time(0));

//variables de tirada//
int dado[6]; int time; int puntajeJuego = 0; int conrondas = 0; int puntajeRonda = 0;

//variables de usuarios//
string jugadorA;

//solicitud del nombre del usuario//

cout << "ingrese el nombre del jugador: ";
cin >> jugadorA;

cout <<"bienvenido "<< jugadorA << "." << endl;

system("pause");
system("cls");

juego();
//puntaje de la ronda//


cout << "el puntaje total de la ronda es: " << puntajeRonda << endl;
cout << endl;
system("pause");
system("cls");

//suma a puntaje de juego//
puntajeJuego += puntajeRonda;
cout << "puntaje total de juego:" << puntajeJuego << "." << endl;

return 0;
}


