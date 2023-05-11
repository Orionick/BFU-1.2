#pragma once

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"

class Circle : public Shape {
private:
	std::pair<double, double> CircleCenter;
	double CircleRadius;
	std::string CircleColor;

	const double PI = 3.1415926;

	double CircleSquareCalculating(double radius);
public:
	Circle() = default;
	Circle(std::pair<double, double> center, double radius, std::string color);
	Circle(std::pair<double, double> center, std::pair<double, double> point, std::string color);
	~Circle() = default;

	double GetShapeSquare();
	std::string GetShapeColor();
};

#endif