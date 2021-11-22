#pragma once
#include "Heroe.h"
#include "Desecho.h"
#include <vector>
using namespace std;

class Controladora {
private:
	Heroe* heroe;
	vector<Desecho*>desechosOrg, desechosPap, desechosPlas, desechosVid;

public:
	Controladora(Bitmap^ bmpHeroe, float numZoom) {
		heroe = new Heroe(bmpHeroe->Width / 4, bmpHeroe->Height / 4,numZoom);
	}
	~Controladora() {}

	void agregarDesecho(Bitmap^ bmpDesechoOrg, Bitmap^ bmpDesechoPap, Bitmap^ bmpDesechoPlas, Bitmap^ bmpDesechoVid,int anchoPantalla,int altoPantalla,int nivel) {
		int x = rand() % 4;
		switch (x)
		{
		case 0: {
			Desecho* organico = new Desecho(bmpDesechoOrg->Width / 3, bmpDesechoOrg->Height, 0.2, anchoPantalla,altoPantalla,nivel);
			desechosOrg.push_back(organico);
		}break;
		case 1: {
			Desecho* papel = new Desecho(bmpDesechoPap->Width / 3, bmpDesechoPap->Height, 0.2, anchoPantalla,altoPantalla, nivel);
			desechosPap.push_back(papel);
		}break;
		case 2: {
			Desecho* plastico = new Desecho(bmpDesechoPlas->Width / 3, bmpDesechoPlas->Height, 0.2, anchoPantalla, altoPantalla, nivel);
			desechosPlas.push_back(plastico);
		}break;
		case 3: {
			Desecho* vidrio = new Desecho(bmpDesechoVid->Width / 3, bmpDesechoVid->Height, 0.2, anchoPantalla, altoPantalla, nivel);
			desechosVid.push_back(vidrio);
		}break;
		}
	}
	void dibujarTodo(Graphics^ g, Bitmap^ bmpHeroe,Bitmap^ bmpDesechoOrg, Bitmap^ bmpDesechoPap, Bitmap^ bmpDesechoPlas, Bitmap^ bmpDesechoVid) {
		heroe->dibujar(g, bmpHeroe);
		for (int i = 0; i < desechosOrg.size(); i++) {
			desechosOrg[i]->dibujar(g, bmpDesechoOrg);
		}
		for (int i = 0; i < desechosPap.size(); i++) {
			desechosPap[i]->dibujar(g, bmpDesechoPap);
		}
		for (int i = 0; i < desechosPlas.size(); i++) {
			desechosPlas[i]->dibujar(g, bmpDesechoPlas);
		}
		for (int i = 0; i < desechosVid.size(); i++) {
			desechosVid[i]->dibujar(g, bmpDesechoVid);
		}
	}

	void moverTodo(Graphics^g) {
		for (int i = 0; i < desechosOrg.size(); i++) {
			desechosOrg[i]->mover(g);
		}
		for (int i = 0; i < desechosPap.size(); i++) {
			desechosPap[i]->mover(g);
		}
		for (int i = 0; i < desechosPlas.size(); i++) {
			desechosPlas[i]->mover(g);
		}
		for (int i = 0; i < desechosVid.size(); i++) {
			desechosVid[i]->mover(g);
		}
	}

	void colision(Graphics^g,int tipo) {

		//verificacion
		for (int i = 0; i < desechosOrg.size(); i++) {
			if (heroe->getRectangle().IntersectsWith(desechosOrg[i]->getRectangle())) {
				if (tipo == 0) {
					heroe->aumentaPuntaje();
				}
				else {
					heroe->disminuyeVida();
					heroe->setX(325);
					heroe->setY(400);
				}
				desechosOrg[i]->setVisible(false);
			}
		}
		for (int i = 0; i < desechosPap.size(); i++) {
			if (heroe->getRectangle().IntersectsWith(desechosPap[i]->getRectangle())) {
				if (tipo == 2) {
					heroe->aumentaPuntaje();
				}
				else {
					heroe->disminuyeVida();
					heroe->setX(325);
					heroe->setY(400);
				}
				desechosPap[i]->setVisible(false);
			}
		}
		for (int i = 0; i < desechosPlas.size(); i++) {
			if (heroe->getRectangle().IntersectsWith(desechosPlas[i]->getRectangle())) {
				if (tipo == 1) {
					heroe->aumentaPuntaje();
				}
				else {
					heroe->disminuyeVida();
					heroe->setX(325);
					heroe->setY(400);
				}
				desechosPlas[i]->setVisible(false);
			}
		}
		for (int i = 0; i < desechosVid.size(); i++) {
			if (heroe->getRectangle().IntersectsWith(desechosVid[i]->getRectangle())) {
				if (tipo == 3) {
					heroe->aumentaPuntaje();
				}
				else {
					heroe->disminuyeVida();
					heroe->setX(325);
					heroe->setY(400);
				}
				desechosVid[i]->setVisible(false);
			}
		}

		//Eliminacion
		for (int i = 0; i < desechosOrg.size(); i++) {
			if (!desechosOrg[i]->getVisible()) {
				desechosOrg.erase(desechosOrg.begin() + i);
			}
		}
		for (int i = 0; i < desechosPap.size(); i++) {
			if (!desechosPap[i]->getVisible()) {
				desechosPap.erase(desechosPap.begin() + i);
			}
		}
		for (int i = 0; i < desechosPlas.size(); i++) {
			if (!desechosPlas[i]->getVisible()) {
				desechosPlas.erase(desechosPlas.begin() + i);
			}
		}
		for (int i = 0; i < desechosVid.size(); i++) {
			if (!desechosVid[i]->getVisible()) {
				desechosVid.erase(desechosVid.begin() + i);
			}
		}
	}

	Heroe* getHeroe() { return heroe; }
};
