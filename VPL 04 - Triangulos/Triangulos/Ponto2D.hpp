#ifndef M_PI
#define M_PI 3.14159265358979
#endif

#ifndef Ponto2D_H
#define Ponto2D_H

#include<math.h>

struct Ponto2D{
	double x,y;

	Ponto2D();
	Ponto2D(double,double);
	double calcular_distancia(Ponto2D);

};

#endif
