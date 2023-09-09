#include <string>
#include <iostream>

class mascota
{
private:
    int vida;
    std::string nombre;

public:
    mascota () 
    {
        this->vida = 100;
    }
    void EstablecerNombre (std::string nombre) 
{

this->nombre = nombre;
} 
    ~mascota () 
{

}

void DecirNombrre ()
{
    std::cout << "Mi nombre es "<<endl;
}

};