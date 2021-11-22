#pragma once
#include <iostream>
using namespace System::Drawing;

class Caracter
{
protected:
	int x, y;
	int ancho;
	int alto;
	int indiceX, indiceY;
	float numZoom;
	bool visible;

public:
	Caracter(int ancho, int alto,float numZoom) {
		this->ancho = ancho;
		this->alto = alto;
		this->numZoom = numZoom;
		indiceX = indiceY = 0;
		visible = true;
	}

	~Caracter() {}

	void dibujar(Graphics^ g, Bitmap^ bmp) {
		Rectangle sectionShown = Rectangle(indiceX * ancho, indiceY * alto, ancho, alto);
		Rectangle zoom = Rectangle(x, y, ancho * numZoom, alto * numZoom);
		g->DrawImage(bmp, zoom, sectionShown, GraphicsUnit::Pixel);
	}

	virtual void mover() {}

	int getX() { return x; }
	int getY() { return y; }
	void setVisible(bool v) { visible=v; }
	bool getVisible() { return visible; }

	Rectangle getRectangle() {
		return Rectangle(x, y, ancho*numZoom, alto*numZoom);
	}

};