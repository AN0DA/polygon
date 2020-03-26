/*! \file Polygon.cpp
	*
	* \brief Zawiera definicjê klasy Polygon
	*
	* Plik zawiera implementacjê metod klasy Polygon.
	*
	* \author Miko³aj Kaczmarek
	* \author Dawid Pieczyñski
	* \author Jan Kaczmarek
	* \author Jakub Marciniak
	* \author Mateusz Chlebosz
	* \date 2020.03.26
	* \version 1.00.00
	*/

#include "polygon.h"

#include <iostream>
#include <fstream>

void Polygon::setVertices(Punkt2* _vertices, int _count) //done
{
	for (int i = 0; i < _count; i++)
		vertices[i] = _vertices[i];
}

void Polygon::changeVertex(int i, double x, double y) //done
{
	vertices[i].setX(x);
	vertices[i].setY(y);
}

void Polygon::setCount(int n) //done
{
	for (int i = count - 1; i >= n; i++)
		delete[i] vertices;

	count = n;
}

double Polygon::getPerimeter() //done
{
	double ans = 0;

	for (int i = 0; i < count; i++) {
		ans += vertices[i].getDistance(vertices[i + 1]);
	}
}

Punkt2* Polygon::getVertices() //done
{
	return vertices;
}
double Polygon::getCircumference(Punkt2* _vertices, int nuber_of_points)
{
	int sum = 0;
	for (int i = 0; i < nuber_of_points; i++)
	{
		sum += _vertices[0].getDistance(_vertices[1]);
	}
	sum += vertices[nuber_of_points - 1].getDistance(_vertices[0]);
	return sum;
}

double Polygon::getField(Punkt2* _vertices, int nuber_of_points) {
	int de_v = nuber_of_points % 2;
	double dyn_x, dyn_y;
	for (int i = 0; i <= nuber_of_points; i++)
	{
		dyn_x += _vertices[i].getX;
		dyn_y += _vertices[i].getY;
	}
	dyn_x /= nuber_of_points;
	dyn_y /= nuber_of_points;
	Punkt2 p2;
	p2.setX(dyn_x);
	p2.setY(dyn_y);
	double field = 0;
	for (int i = 0; i < nuber_of_points; i++)
	{
		field += getTriangleArea(_vertices[i], _vertices[i + 1], p2);
	}
	field += getTriangleArea(_vertices[nuber_of_points - 1], _vertices[0], p2);
	return field;
}

double Polygon::getTriangleArea(Punkt2 _p1, Punkt2 _p2, Punkt2 _p3) //done
{
	return abs(((_p1.getX * (_p2.getY - _p3.getY)) + (_p2.getX * (_p3.getY - _p1.getY)) + (_p3.getX * (_p1.getY - _p2.getY)) / 2));
}

double