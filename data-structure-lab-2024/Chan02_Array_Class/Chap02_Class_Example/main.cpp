#include <cstdio>
#include "Car.h"
#include "SportsCar.h"
#include "Rectengle"

int main() {
	Car myCar(50, "K3", 4);
	Car yourCar(100, "K5", 3);
	myCar.display();
	yourCar.display();
	myCar.whereAmI();
	yourCar.whereAmI();

	SporsCar scar;
	scar.speedUp();

}

Rectengle r(10, 20);
double perimeter = r.getPerimeter();
std::cout << "Rectengle 1:" << std::endl;
std::cout << "Area: " << r.getArea() << std::endl;
std::cout << "Perimeter:" << perimeter << std::endl;
std::cout << "is square?" << std::boolalpha << r.isSqare std::endl;