#include "Ponto2D.hpp"
#include <math.h>


Ponto2D::Ponto2D(){}
Ponto2D::Ponto2D(double a, double b){
    x = a;
    y = b;
}

double Ponto2D::calcular_distancia(Ponto2D p2){
	double dx = p2.x - x;
	double dy = p2.y - y;
	return sqrt(dx*dx + dy*dy);
}
