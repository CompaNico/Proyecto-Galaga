bin/Galaga: src/Galaga.cpp include/*
	c++ src/Galaga.cpp -o bin/Galaga -I include -l curses

run: bin/Galaga
	./bin/Galaga