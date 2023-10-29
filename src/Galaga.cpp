#include <curses.h>
#include <string.h>
#include <iostream>
#include <unistd.h>

#include <fstream>
#include <filesystem>
#include <list>

#include <Ventana.hpp>
#include <FighterT.hpp>
#include <Bala.hpp>
#include <NaveAlien.hpp>

using namespace std;
class Demo
{
private:
    int x;
    int y;
};

int main(int argc, char const *argv[])
{

    FighterT *F1 = new FighterT (5, 40);
    NaveAlien *AL1 = new NaveAlien(50,20);
    NaveAlien *AL2 = new NaveAlien (50, 20);


    Ventana *ventana = new Ventana();

    list<Dibujo *> dibujos;
    dibujos.push_back(F1);
    // dibujos.push_back(AL1);
    // dibujos.push_back(AL2);

    list<Actualizable *> actualizables;
    actualizables.push_back(F1);
    while (!ventana->DeboCerrar())
    {
        int key = getch();
        if (key == 'a' || key == KEY_LEFT)
        {
            F1->Avanzar();
        }
        if (key == 'd' || key == KEY_RIGHT)
        {
            F1->CambiarDireccion();
        }

        if (key == ' ')
        {
            Bala *b = new Bala(F1->LeerPosicion());
            dibujos.push_back(b);
            actualizables.push_back(b);
        }

        ventana->Dibujar(dibujos);
        ventana->Actualizar(actualizables);
    }
    return 0;
}