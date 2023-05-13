#pragma once

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle : public Shape {
private:
	std::map<char, std::pair<double, double>> RectanglePoints;
	double AB_RectangleSideLength;
	double BC_RectangleSideLength;
	double CD_RectangleSideLength;
	double AD_RectangleSideLenght;
	std::string RectangleColor;

	void RectangleSidesLengthCalculating(std::pair<double, double> point_a, std::pair<double, double> point_b, std::pair<double, double> point_c, std::pair<double, double> point_d);
	double RectangleSquareCalculating(double side_ab, double side_bc);
public:
	Rectangle() = default;
	Rectangle(std::map<char, std::pair<double, double>> points, std::string color);
	~Rectangle() = default;
	std::string name_type() const override { return "rectangle"; }
	double GetShapeSquare() override;
	std::string GetShapeColor() override;
};

#endif