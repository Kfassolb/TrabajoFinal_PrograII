#pragma once
#include "Caracter.h"

class Bala : public Caracter {
private:
	int direccion;
	int dx, dy;
public:
	Bala(int ancho, int alto, float numZoom, int x, int y, int direccion) :Caracter(ancho, alto, numZoom) {
		this->x = x;
		this->y = y;
		this->direccion = direccion;
		dx = dy = 20;
	}
	~Bala() {}

	void mover(Graphics^ g) {
		if (direccion == 0 && y + alto * numZoom <= g->VisibleClipBounds.Height) {
			y += dy;
		}
		if (direccion == 3 && y >= 0) {
			y -= dy;
		}
		if (direccion == 2 && x + ancho * numZoom <= g->VisibleClipBounds.Width) {
			x += dx;
		}
		if (direccion == 1 && x >= 0) {
			x -= dx;
		}
	}

	int getXAncho() { return x + ancho * numZoom; }
	int getYAlto() { return y + alto * numZoom; }
};