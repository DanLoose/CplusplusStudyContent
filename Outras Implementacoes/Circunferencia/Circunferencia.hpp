#ifndef M_PI
#define M_PI 3.141592653589
#endif

#ifndef CIRCUNFERENCIA_H
#define CIRCUNFERENCIA_H

struct Circunferencia
{
	double _x;
	double _y;
	double _raio;

	Circunferencia(double x,double y,double raio);
	double calcularArea();
};


#endif
