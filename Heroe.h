#pragma once
#include "Persona.h"
class Heroe :public Persona {
private:
	int vida;
	int puntaje;
public:
	Heroe(int ancho,int alto, float numZoom):Persona(ancho,alto,numZoom){
		vida = 5;
		puntaje = 0;
		dx = dy = 10;
		x = 325;
		y = 400;
	}
	~Heroe(){}

	void setX(int v) { x = v; }
	void setY(int v) { y = v; }
	int getVida() { return vida; }
	void disminuyeVida() { vida--; }
	int getPuntaje() { return puntaje; }
	void aumentaPuntaje() { puntaje += 5; }
	int getIdy() { return indiceY; }
};