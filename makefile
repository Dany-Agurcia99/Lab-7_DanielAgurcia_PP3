run: Main.o Persona.o Elemento.o WaterB.o FireB.o EarthB.o AirB.o NonB.o PoderEspecial.o Tipo_Poder.o Ofensivo.o Defensivo.o Curativo.o Mascota.o 
g++ Main.o Persona.o Elemento.o WaterB.o FireB.o EarthB.o AirB.o NonB.o PoderEspecial.o Tipo_Poder.o Ofensivo.o Defensivo.o Curativo.o Mascota.o -o run
Main.o: Main.cpp Persona.h Elemento.h WaterB.h FireB.h EarthB.h AirB.h NonB.h PoderEspecial.h Tipo_Poder.h Ofensivo.h Defensivo.h Curativo.h Mascota.h 
g++ -c Main.cpp
Persona.o: Persona.h Persona.cpp
g++ -c Persona.cpp
Elemento.o: Elemento.h Elemento.cpp
g++ -c Elemento.cpp
WaterB.o: WaterB.h WaterB.cpp
g++ -c WaterB.cpp
FireB.o: FireB.h FireB.cpp
g++ -c FireB.cpp
EarthB.o: EarthB.h EarthB.cpp
g++ -c EarthB.cpp
AirB.o: AirB.h AirB.cpp
g++ -c AirB.cpp
NonB.o: NonB.h NonB.cpp
g++ -c NonB.cpp
PoderEspecial.o: PoderEspecial.h PoderEspecial.cpp
g++ -c PoderEspecial.cpp
Tipo_Poder.o: Tipo_Poder.h Tipo_Poder.cpp
g++ -c Tipo_Poder.cpp
Ofensivo.o: Ofensivo.h Ofensivo.cpp
g++ -c Ofensivo.cpp
Defensivo.o: Defensivo.h Defensivo.cpp
g++ -c Defensivo.cpp
Curativo.o: Curativo.h Curativo.cpp
g++ -c Curativo.cpp
Mascota.o: Mascota.h Mascota.cpp
g++ -c Mascota.cpp