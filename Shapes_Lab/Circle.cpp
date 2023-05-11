#include "Circle.h"

Circle::Circle(std::pair<double, double> center, double radius, std::string color) {
	CircleCenter = center;
	CircleRadius = radius;
	CircleColor = color;
}

Circle::Circle(std::pair<double, double> center, std::pair<double, double> point, std::string color) {
	CircleCenter = center;
	CircleRadius = 2 * (std::abs(sqrt(pow(point.second - center.second, 2) + pow(point.first - center.first, 2))));
	CircleColor = color;
}

double Circle::CircleSquareCalculating(double radius) {
	return PI * pow(radius, 2);
}

double Circle::GetShapeSquare() {
	return CircleSquareCalculating(CircleRadius);
}

std::string Circle::GetShapeColor() {
	return CircleColor;
}