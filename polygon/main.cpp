/*! \file main.cpp
	*
	* \brief Kod programu testuj�cego klas� Punkt2
	*
	* Plik zawiera funkcj� main(),
	* w kt�rej wykonano kilka podstawowych test�w
	* dotycz�cych klasy Punkt2
	*
	* \author Miko�aj Kaczmarek
	* \author Dawid Pieczy�ski
	* \author Jan Kaczmarek
	* \author Jakub Marciniak
	* \author Mateusz Chlebosz
	* \date 2020.03.26
	* \version 1.00.00
	*/

#include <iostream>

#include "Punkt2.h"
#include "Polygon.h"

int main()
{
	//delaracja drugiego punktu
	Punkt2* p1;
	p1->setX(10.0);
	p1->setY(20.5);
	// deklaracja drugiego punktu
	Punkt2* p2 = new Punkt2;
	p2->setX(11.0);
	p2->setY(60.7);

	std::cout << p2->getDistance(p1);
	std::cout << p1->getDistance(p2);

	std::cout << p2->getDistance(p2);
	std::cout << p2->getAngle(p2);

	std::cout << sizeof(p1);

	// Deklaracja czworok�ta
	Punkt2 czw1;
	czw1.setX(11);
	czw1.setY(0);
	Punkt2 czw2;
	czw2.setX(15);
	czw2.setY(3);
	Punkt2 czw3;
	czw3.setX(15);
	czw3.setY(0);
	Punkt2 czw4;
	czw4.setX(11);
	czw4.setY(3);
	Polygon* czworokat = new Polygon;
	Punkt2* tablica = new Punkt2[4];
	tablica[0] = czw1;
	tablica[1] = czw2;
	tablica[2] = czw3;
	tablica[3] = czw4;
	czworokat->setVertices(tablica, 4);

	// Zmiana punktu w czworok�cie
	Punkt2 czw1new;
	czw1new.setX(11);
	czw1new.setY(60);
	Punkt2* tablica = czworokat->getVertices();
	tablica[0] = czw1new;
	czworokat->setVertices(tablica, 4);

	//Obw�d czworok�ta
	Punkt2* tablica = czworokat->getVertices();
	return 0;
}