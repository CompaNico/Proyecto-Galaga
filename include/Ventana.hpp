#pragma once

#include <curses.h>

#include <unistd.h>
#include <Actualizable.hpp>
#include <Dibujo.hpp>
#include <list>

using namespace std;

class Ventana
{

private:
    int x, y;
    bool cerrar;

public:
    ~Ventana()
    {
        keypad(stdscr, FALSE);
        endwin();
    }

    Ventana()
    {
        initscr();
        noecho();
        curs_set(FALSE);

        cbreak();

        timeout(10);
        keypad(stdscr, TRUE);

        getmaxyx(stdscr, y, x);
        cbreak();
        cerrar = false;
    }

    void Actualizar(list<Actualizable *> listaActualizables)
    {
        for (auto &&iterador : listaActualizables)
        {
            iterador->Actualizar();
        }
        usleep(41000); // imagenes por segundo
    }

    void Dibujar(list<Dibujo *> listaDibujos)
    {
        clear();
        box(stdscr, '|', '-');
        for (auto &&dibujo : listaDibujos)
        {
            dibujo->Dibujar();
        }
        refresh();
    }
    bool DeboCerrar()
    {
        return this->cerrar;
    }
    void Cerrar()
    {
        this->cerrar = true;
    }
};