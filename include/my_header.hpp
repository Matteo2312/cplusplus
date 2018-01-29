//  Copyright (c) 2017 Antoine Tran Tan
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP
#include <cmath>

double exo1 (double rayon)
{
	double V;
	V = 4/3 * 3.14 * (rayon * rayon * rayon);
	return V;


}
void exo2 (short a, short b)
{
	short y;
	y = a < b && !a;
}

double exo3(double rayon)
{
	double V;
	V = 3/4 * pow(rayon, 3) * 3.14;
	return V;
}
#endif // MY_HEADER_HPP

