#include <iostream>
using namespace std;

class Circle {
  private:
    int radius;
    const double pi = 3.14159265358979;
  public:
    void setRadius(int radius);
    int getRadius();
    double getArea();
    int getDiameter();
    double getCircumference();
};

void Circle::setRadius(int _radius) {
  radius = _radius;
}

int Circle::getRadius() {
  return radius;
}

double Circle::getArea() {
  return radius * radius * pi;
}

int Circle::getDiameter() {
  return radius * 2;
}

double Circle::getCircumference() {
  return 2 * radius * pi;
}

int main() {
  Circle circle;

  circle.setRadius(3);

  cout << "radius: " << circle.getRadius() << endl
       << "area: " << circle.getArea() << endl
       << "diameter: " << circle.getDiameter() << endl
       << "circumference: " << circle.getCircumference();
}