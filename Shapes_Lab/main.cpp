#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>

int main() {
	std::map<char, std::pair<double, double>> points_1{ {'A', { 2.3, 1.2 } }, { 'B', { 3.6, 3.0} }, { 'C', { 3.2, 6.0 } } };
	Triangle triangle(points_1, "RED");
	Shape* shape = &triangle;

	double triangleSquare = shape->GetShapeSquare();
	std::string triangleColor = shape->GetShapeColor();
	std::cout << triangleSquare << std::endl << triangleColor << std::endl;

	std::map<char, std::pair<double, double>> points_2{ {'A', { 1.0, 1.0 } }, { 'B', { 1.0, 3.0} }, { 'C', { 6.0, 3.0 } }, { 'D', { 6.0, 1.0 } } };
	Rectangle rectangle(points_2, "BLUE");
	shape = &rectangle;

	double rectangleSquare = shape->GetShapeSquare();
	std::string rectangleColor = shape->GetShapeColor();
	std::cout << rectangleSquare << std::endl << rectangleColor << std::endl;

	std::pair<double, double> center{ 3.2, 5.4 };
	std::pair<double, double> point{ 5.3, 2.1 };
	Circle circle_1(center, 3.3, "YELLOW");
	shape = &circle_1;
	double circleSquare = shape->GetShapeSquare();
	std::string circleColor = shape->GetShapeColor();
	std::cout << circleSquare << std::endl << circleColor << std::endl;

	Circle circle_2(center, point, "PINK");
	shape = &circle_2;
	circleSquare = shape->GetShapeSquare();
	circleColor = shape->GetShapeColor();
	std::cout << circleSquare << std::endl << circleColor << std::endl;

	return 0;
}