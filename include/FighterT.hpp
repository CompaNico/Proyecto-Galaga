#pragma once

#include <Vector.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <list>
#include <HitBox.hpp>
class FighterT : public Dibujo, public Actualizable, public HitBox
{
private:
public:
    FighterT() : Dibujo("FT"),
                 HitBox(
                     this->posicion.LeerX(),
                     this->posicion.LeerY(), 12, 4)
    {
        this->posicion = Vector();
    }

    FighterT(int x, int y) : Dibujo("FT"),
                             HitBox(this->posicion.LeerX(),
                                    this->posicion.LeerY(), 12, 4)
    {
        this->posicion.DezplazarX(x);
        this->posicion.DezplazarY(y);
    }

    void Actualizar()
    {
        this->x = this->posicion.LeerX();
        this->y = this->posicion.LeerY();
    }
    void Avanzar()
    {
        this->posicion.DezplazarX(1);
    }
    void CambiarDireccion()
    {
        this->posicion.CambiarDireccionX();
    }
    Vector LeerPosicion()
    {
        return this->posicion;
    }

    ~FighterT()
    {
    }
};