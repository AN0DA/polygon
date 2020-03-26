/*! \file Punkt2.cpp
	*
	* \brief Zawiera definicjê klasy Punkt2
	*
	* Plik zawiera implementacjê metod klasy Punkt2.
	*
	* \author Miko³aj Kaczmarek
	* \author Dawid Pieczyñski
	* \author Jan Kaczmarek
	* \author Jakub Marciniak
	* \author Mateusz Chlebosz
	* \date 2020.03.26
	* \version 1.00.00
	*/
#include <math.h>
#include "Punkt2.h"
#define PI 3.14159265

void Punkt2::setX(double _x) //done
{
	x = _x;
}

void Punkt2::setY(double _y) //done
{
	y = _y;
}

double Punkt2::getX() //done
{
	return x;
}

double Punkt2::getY() //done
{
	return y;
}

double Punkt2::getRadius() //done
{
	return sqrt(pow(x, 2) + pow(y, 2));
}

double Punkt2::getAngle(Punkt2* _p) //done; errored
{
	return atan(y - _p->getY / x - _p->getY) * 180 / PI;
}

double Punkt2::getDistance(Punkt2 _p) //done
{
	return sqrt(pow((x - _p.getX), 2) + pow((y - _p.getY), 2));
}