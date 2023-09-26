
#CXX = x86_x64-mingw32-g++    # Comando Variable, remnplaza todo donde esta CXX; 
                        #Esto es para compilar en windows

Compilar: src/Galaga.cpp
	g++ src/Galaga - o bin/Galagaex

Ejecutar: bin/Galagaex
	./bin/Galagaex