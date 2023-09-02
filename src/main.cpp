#include <iostream>
#include <mascota.hpp>
int main(int argc, char const *argv[])
{
std::cout<<"Juego de mascota"<<std::endl;

mascota m1,m2,m3;
m1.Establecernombre("Raul");
m2.Establecernombre("Pinky");
m3.Establecernombre("Ramon");

m1.DecirNombre();
m2.DecirNombre();
m3.DecirNombre();

return 0;
}
