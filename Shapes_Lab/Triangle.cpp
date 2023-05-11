#include "Triangle.h"
#include <math.h>

Triangle::Triangle(std::map<char, std::pair<double, double>> points, std::string color) {
	TrianglePoints = points;
	TriangleColor = color;

	TriangleSidesLengthCalculating(std::make_pair(TrianglePoints['A'].first, TrianglePoints['A'].second),
									std::make_pair(TrianglePoints['B'].first, TrianglePoints['B'].second),
									std::make_pair(TrianglePoints['C'].first, TrianglePoints['C'].second));
}

double Triangle::GetShapeSquare() {
	return TriangleSquareCalculating(AB_TriangleSideLength, BC_TriangleSideLength, AC_TriangleSideLength);
}

void Triangle::TriangleSidesLengthCalculating(std::pair<double, double> point_a, std::pair<double, double> point_b, std::pair<double, double> point_c) {
	AB_TriangleSideLength = std::abs(sqrt(pow(point_b.second - point_a.second, 2) + pow(point_b.first - point_a.first, 2)));
	BC_TriangleSideLength = std::abs(sqrt(pow(point_c.second - point_b.second, 2) + pow(point_c.first - point_b.first, 2)));
	AC_TriangleSideLength = std::abs(sqrt(pow(point_c.second - point_a.second, 2) + pow(point_c.first - point_a.first, 2)));
}

double Triangle::TriangleSquareCalculating(double side_ab, double side_bc, double side_ac) {
	double p = (side_ab + side_bc + side_ac) / 2;
	return sqrt(p * (p - side_ab) * (p - side_bc) * (p - side_ac));
}

std::string Triangle::GetShapeColor() {
	return TriangleColor;
}