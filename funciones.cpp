#include<iostream>
#include "funciones.h"
#include <ctime>

using namespace std;



    int tirada(){
        return rand ()% 6+1;
    }

    void hacerTirada(int dado[6]){
        int y;
    for(y=0; y<6; y++){
        dado[y] = tirada();
      }
    }

    void mostrarTirada(int dado[6]){
    int y;

    for (y=0; y<6; y++){
    cout << dado[y] << endl;
    }
    }

    int sexteto(int dado[6]){
    int y;
    int rep = 0;
    int numRep;

    for(int y=0; y<6; y++){
        dado[y] = tirada();

        if(y == dado[y]){
            rep++;
        }
        else if(rep == 6){
            numRep = y;
        }
      }
    }

    int puntajeMaxRonda(int tiradaA, int tiradaB, int tiradaC){
    int PuntajeRonda;

    if(tiradaA > tiradaB && tiradaA > tiradaC){
        PuntajeRonda = tiradaA;
    }
    else if(tiradaB > tiradaA && tiradaB > tiradaC){
        PuntajeRonda = tiradaB;
    }
    else{
        PuntajeRonda = tiradaC;
    }
    return PuntajeRonda;
    }




