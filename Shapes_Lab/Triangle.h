#pragma once

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Shape.h"

class Triangle : public Shape {
private:
	std::map<char, std::pair<double, double>> TrianglePoints;
	double AB_TriangleSideLength;
	double BC_TriangleSideLength;
	double AC_TriangleSideLength;
	std::string TriangleColor;

	void TriangleSidesLengthCalculating(std::pair<double, double> point_a, std::pair<double, double> point_b, std::pair<double, double> point_c);
	double TriangleSquareCalculating(double side_ab, double side_bc, double side_ac);
public:
	Triangle() = default;
	Triangle(std::map<char, std::pair<double, double>> points, std::string color);
	~Triangle() = default;

	double GetShapeSquare() override;
	std::string GetShapeColor() override;
};

#endif