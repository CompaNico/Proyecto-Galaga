#include <iostream>
#include <fstream>
#include <unistd.h>
#include <string>
#include <curses.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int x,y;
    bool cerrar;
    string directorio, recurso;
    fstream archivo;

    initscr();
    getmaxyx(stdscr, y, x);
    cerrar = false;
    std ::cout << "Version Trail" << std ::endl;
    usleep(41000);

   
    box(stdscr, '|', '*');
    directorio = "/data/" + recurso + "FighterT.txt";
    archivo.open(directorio, ios::in);
    
    refresh();
    // archivo.clear();
    // archivo.seekg(0);
    // archivo.close();
    // clear();

    return 0;
}
