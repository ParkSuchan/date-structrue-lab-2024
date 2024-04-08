#pragma once
#include <iostream>

class Rectengle {
private:
	double width;
	double height;
}

	Rectengle(double w, double h) {
		width = w;
		height = h;
}
	double getArea() {
		return width * height;
}
	double getPerimeter() {
		return 2 * (width + height);
}

	bool isSquare() {
		return (width == height);
	}

};