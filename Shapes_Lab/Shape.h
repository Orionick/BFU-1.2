#pragma once

#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>
#include <map>
#include <utility>

class Shape {
private:
	std::map<char, std::pair<double, double>> ShapePoint;
	std::string color;
public:
	Shape() = default;
	virtual ~Shape() = default;

	virtual double GetShapeSquare() = 0;
	virtual std::string GetShapeColor() = 0;
};

#endif