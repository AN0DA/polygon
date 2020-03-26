/*! \file Punkt2.h
*
* \brief Zawiera deklaracj� klasy Punkt2
*
* Plik zawiera deklaracj� klasy Punkt2.h.
* Wsp�rz�dne punktu s� podawane w uk�adzie kartezja�skim.
* Klasa zawiera kilka metod skladowych
*
* \author Miko�aj Kaczmarek
* \author Dawid Pieczy�ski
* \author Jan Kaczmarek
* \author Jakub Marciniak
* \author Mateusz Chlebosz
* \date 2020.03.26
* \version 1.00.00
*/

#pragma once

#include <cmath>

class Punkt2
{
	double x{ 0.0 };
	double y{ 0.0 };

public:
	explicit Punkt2() {};
	Punkt2(double _x, double _y) : x{ _x }, y{ _y } {};
	~Punkt2() {
		// Destruktor
	};
	//settery
	void setX(double _x);
	void setY(double _y);

	//gettery
	double getX();
	double getY();

	//wsp�rz�dne biegunowe
	double getRadius();
	double getAngle(Punkt2* _p);

	//odleg�o�� punktu od punktu _p
	double getDistance(Punkt2 _p);
};

//int Punkt2::Punkt2 = 0;
