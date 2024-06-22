#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
/// #include "rlutil.h"

using namespace std;

#include "funciones.h"

int main()
{
    int opc;

        while(true){ /// al ponerlo en false el programa se corrompe y se muestra todo en negro
        system("cls"); /// al quitarlo, al finalizar una partida no se limpiaria la pantalla

    /// utilizando rlutil, ubicamos el menu en la columna y fila deseada, en este caso seria en el medio de la pantalla, tambien se podria hacer lo mismo con las demas cosas

    /// rlutil::locate(30, 7);
        cout << "#################################################" <<endl;
    /// rlutil::locate(30, 8);
        cout << "###### TP FINAL - FUENTES, BOTTELI, MONZON ######" << endl;
    /// rlutil::locate(30, 9);
        cout << "#################################################" << endl;
    /// rlutil::locate(30, 10);
        cout << endl;
    /// rlutil::locate(30, 11);
        cout << "------------------------------------------------- " << endl;
    /// rlutil::locate(30, 12);
        cout << "1. UN JUGADOR" << endl;
    /// rlutil::locate(30, 13);
        cout << "2. DOS JUGADORES" << endl;
    /// rlutil::locate(30, 14);
        cout << "0. SALIR DEL JUEGO " << endl;
    /// rlutil::locate(30, 15);
        cout << "------------------------------------------------- " << endl << endl;
    /// rlutil::locate(30, 16);
        cout << "SELECCIONE UNA OPCION: ";


        cin >> opc;

        system("cls"); /// al quitarlo, cuando seleccionamos un modo juego, sigue quedando el menu principal

        switch(opc){
            case 1:
                while (partida(1));
                break; /// al quitar el break, cuando se finaliza una partida nunca se volveria al menu principal, y se reiniciaria el juego infinitamente
            case 2:
                while (partida(2));
                break;
            case 0:
                return 0;
                break;

            default:
                cout << "OPCION INVALIDA, VUELVA A INGRESAR OTRA. " << endl;
                system("pause"); /// pausa de sistema añadida, ya que sin ella, no se llegaba a leer lo que dice
                break;


        }

    }
    return 0;
}
