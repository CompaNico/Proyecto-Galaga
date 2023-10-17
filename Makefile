
#CXX = x86_x64-mingw32-g++    # Comando Variable, remnplaza todo donde esta CXX; 
                        #Esto es para compilar en windows

comp: src/Galaga.cpp
	g++ src/Galaga - o bin/Galagaex

run: bin/Galagaex
	./bin/Galagaex

bin/GTrailex : src/GalagaTrail.cpp
	c++ src/GalagaTrail.cpp -o bin/GTrailex -I include -l curses

trail : bin/GTrailex
	./bin/GTrailex