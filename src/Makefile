all: testDyV

bin/DyV: DyV.h 
	mkdir -p bin #-p evita problemas si la carpeta bin ya está creada 
	g++ -c DyV.h

bin/testDyV: DyV.h testDyV.cpp #poner bin/ antes de : para evitar recompilacion
	mkdir -p bin
	g++ -o bin/testDyV testDyV.cpp

clean:
	rm -r *.o *.gch *.pch bin bin/testDyV
