//  Copyright (c) 2017 Antoine Tran Tan
//

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP
#include <cmath>
#include <string>

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

void exo4(double nb1, double nb2, double nb3)
{

	if ((nb1 >= nb2) && (nb1 >= nb3))
	{
		std::cout << nb1 << " est le maximum" << std::endl;
	}
	if ((nb2 >= nb1) && (nb2 >= nb3))
	{
		std::cout << nb2 << " est le maximum" << std::endl;
	}
	if ((nb3 >= nb1) && (nb3 >= nb2))
	{
		std::cout << nb3 << " est le maximum" << std::endl;
	}
	
}
#endif // MY_HEADER_HPP

