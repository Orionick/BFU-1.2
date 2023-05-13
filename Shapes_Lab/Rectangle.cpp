#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(std::map<char, std::pair<double, double>> points, std::string color) {
	RectanglePoints = points;
	RectangleColor = color;

	RectangleSidesLengthCalculating(std::make_pair(RectanglePoints['A'].first, RectanglePoints['A'].second),
		std::make_pair(RectanglePoints['B'].first, RectanglePoints['B'].second),
		std::make_pair(RectanglePoints['C'].first, RectanglePoints['C'].second),
		std::make_pair(RectanglePoints['D'].first, RectanglePoints['D'].second));
}

void Rectangle::RectangleSidesLengthCalculating(std::pair<double, double> point_a, std::pair<double, double> point_b, std::pair<double, double> point_c, std::pair<double, double> point_d) {
	AB_RectangleSideLength = std::abs(sqrt(pow(point_b.second - point_a.second, 2) + pow(point_b.first - point_a.first, 2)));
	BC_RectangleSideLength = std::abs(sqrt(pow(point_c.second - point_b.second, 2) + pow(point_c.first - point_b.first, 2)));

	std::pair<double, double> a_vec{ point_b.first - point_a.first, point_b.second - point_a.second };
	std::pair<double, double> b_vec{ point_c.first - point_b.first, point_c.second - point_b.second };
	if (a_vec.first * b_vec.first + a_vec.second * b_vec.second != 0)
		throw std::exception("=(");

	CD_RectangleSideLength = AB_RectangleSideLength;
	AD_RectangleSideLenght = BC_RectangleSideLength;
}

double Rectangle::RectangleSquareCalculating(double side_ab, double side_bc) {
	return side_ab * side_bc;
}

double Rectangle::GetShapeSquare() {
	return RectangleSquareCalculating(AB_RectangleSideLength, BC_RectangleSideLength);
}

std::string Rectangle::GetShapeColor() {
	return RectangleColor;
}