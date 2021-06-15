#ifndef M_PI
#define M_PI 3.14159265358979
#endif

#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Ponto2D.hpp"
#include <math.h>

struct Triangulo{
	Ponto2D p1;
	Ponto2D p2;
	Ponto2D p3;

	Triangulo(Ponto2D,Ponto2D, Ponto2D);
	double calcular_perimetro();
	double calcular_area();
	int comparar_area(Triangulo*);
};

#endif