/*! \file Polygon.h
	*
	* \brief Zawiera deklaracjê klasy Polygon
	*
	* Plik zawiera deklaracjê klasy Polygon.h.
	* Wspó³rzêdne punktu s¹ podawane w uk³adzie kartezjañskim.
	* Klasa zawiera kilka metod skladowych
	*
	* \author Miko³aj Kaczmarek
	* \author Dawid Pieczyñski
	* \author Jan Kaczmarek
	* \author Jakub Marciniak
	* \author Mateusz Chlebosz
	* \date 2020.03.26
	* \version 1.00.00
	*/

#pragma once

#include "Punkt2.h"

#include <iostream>
#include <fstream>
#include <string>

class Polygon
{
	unsigned int count; /*!< Iloœæ wierzcho³ków wielok¹ta */

	Punkt2* vertices; /*!< Tablica wierzocho³ków z za³o¿eniem, ¿e s¹ podane w kolejnoœci budowania siê figury*/

public:
	//! Metoda konstruuj¹ca tablicê wierzcho³ków.
	/*!
	  \param _vertices  argument typu Punkt*  przekazuj¹cy tablicê wierzcho³ków wielok¹ta
	  \param _count argument typu  unsigned int przekazuj¹cy iloœæ wierzcho³ków.
	  \sa changeVertex()
	*/
	void setVertices(Punkt2* _vertices, int _count);

	//liczenie obwodu
	double getCircumference(Punkt2* _vertices, int nuber_of_points);
	//liczenie pola (stodo³a)
	double getField(Punkt2* _vertices, int nuber_of_points);
	//! Metoda zmieniaj¹ca wspólrzêdne i-tego wierzcho³ka.
	/*!
	  \param i argument typu int  przekazuj¹cy numer wiercho³ka do zmiany
	  \param x argument typu  double przekazuj¹cy now¹ wartoœæ do wspó³rzêdnej x.
	  \param y argument typu  double przekazuj¹cy now¹ wartoœæ do wspó³rzêdnej y.
	  \sa setVertices()
	*/
	void changeVertex(int i, double x, double y);

	//! Metoda ustawiaj¹ca iloœæ wierzcho³ków.
	/*!
	  \param n argument typu int przekazuj¹cy iloœæ wiercho³ków
	  \sa setVeritces()
	*/
	void setCount(int n);

	double getPerimeter();/*!< Metoda obliczaj¹ca obwód wielok¹ta */

	Punkt2* getVertices();

	double getConvexArea();

	void saveThis(int type, std::string lokalizacja);//type 1-binary,type 2-normal

private:
	/*oblicza pole trójk¹ta na podstawie wierzcho³ków*/
	double getTriangleArea(Punkt2 _p1, Punkt2 _p2, Punkt2 _p3);
};