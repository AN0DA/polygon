/*! \file Polygon.h
	*
	* \brief Zawiera deklaracj� klasy Polygon
	*
	* Plik zawiera deklaracj� klasy Polygon.h.
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

#include "Punkt2.h"

#include <iostream>
#include <fstream>
#include <string>

class Polygon
{
	unsigned int count; /*!< Ilo�� wierzcho�k�w wielok�ta */

	Punkt2* vertices; /*!< Tablica wierzocho�k�w z za�o�eniem, �e s� podane w kolejno�ci budowania si� figury*/

public:
	//! Metoda konstruuj�ca tablic� wierzcho�k�w.
	/*!
	  \param _vertices  argument typu Punkt*  przekazuj�cy tablic� wierzcho�k�w wielok�ta
	  \param _count argument typu  unsigned int przekazuj�cy ilo�� wierzcho�k�w.
	  \sa changeVertex()
	*/
	void setVertices(Punkt2* _vertices, int _count);

	//liczenie obwodu
	double getCircumference(Punkt2* _vertices, int nuber_of_points);
	//liczenie pola (stodo�a)
	double getField(Punkt2* _vertices, int nuber_of_points);
	//! Metoda zmieniaj�ca wsp�lrz�dne i-tego wierzcho�ka.
	/*!
	  \param i argument typu int  przekazuj�cy numer wiercho�ka do zmiany
	  \param x argument typu  double przekazuj�cy now� warto�� do wsp�rz�dnej x.
	  \param y argument typu  double przekazuj�cy now� warto�� do wsp�rz�dnej y.
	  \sa setVertices()
	*/
	void changeVertex(int i, double x, double y);

	//! Metoda ustawiaj�ca ilo�� wierzcho�k�w.
	/*!
	  \param n argument typu int przekazuj�cy ilo�� wiercho�k�w
	  \sa setVeritces()
	*/
	void setCount(int n);

	double getPerimeter();/*!< Metoda obliczaj�ca obw�d wielok�ta */

	Punkt2* getVertices();

	double getConvexArea();

	void saveThis(int type, std::string lokalizacja);//type 1-binary,type 2-normal

private:
	/*oblicza pole tr�jk�ta na podstawie wierzcho�k�w*/
	double getTriangleArea(Punkt2 _p1, Punkt2 _p2, Punkt2 _p3);
};