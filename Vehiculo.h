#pragma once
#include "Caracter.h"
class Vehiculo :public Caracter {
private:
	int dx,dy;
	int tipoMov;
public:
	Vehiculo(int ancho, int alto, float numZoom) : Caracter(ancho,alto,numZoom) {
		srand(time (NULL));
		tipoMov = rand() % 4;
		switch (tipoMov) {
		case 0: {
			x = 1;
			y = 320;
		}break;
		case 1: {
			x = 675;
			y = 280;
		}break;
		case 2: {
			x = 360;
			y = 417;
		}break;
		case 3: {
			x = 315;
			y = 140;
		}break;
		}
		dx= dy = 5;
		indiceY = rand() % 3;
	}
	~Vehiculo() {}

	void mover(Graphics^g) {
		switch (tipoMov) {
		case 0: {
			indiceX =1;
			x += dx;
		}break;
		case 1: {
			indiceX = 1;
			x -= dx;
		}break;
		case 2: {
			indiceX = 0;
			y -= dy;
		}break;
		case 3: {
			indiceX = 2;
			y+=dy;
		}break;
		}
	}
	int getXAncho() { return x + ancho * numZoom; }
	int getYAlto() { return y + alto * numZoom; }
};