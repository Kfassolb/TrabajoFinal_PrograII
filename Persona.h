#pragma once
#include "Caracter.h"

class Persona : public Caracter {
protected:
	int dx, dy;

public:
	Persona(int ancho, int alto,float numZoom) : Caracter(ancho, alto,numZoom) {
		dx = dy = 7;
		x = 300;
		y = 290;
	}

	~Persona() {}

	void mover(Graphics^ g, char i) {
		switch (i)
		{
		case 'A':
			if (x > 0) {
				x -= dx;
				indiceY = 1;
			}
			break;

		case 'D':
			if (x + ancho * numZoom < g->VisibleClipBounds.Width) {
				x += dx;
				indiceY = 2;
			}
			break;

		case 'W':
			if (y > 0) {
				y -= dy;
				indiceY = 3;
			}
			break;

		case 'S':
			if (y + alto * numZoom < g->VisibleClipBounds.Height) {
				y += dy;
				indiceY = 0;
			}
			break;
		}

		indiceX++;
		if (indiceX > 3)indiceX = 0;
	}


};