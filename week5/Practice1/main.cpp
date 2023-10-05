#include <iostream>
using namespace std;

class Rectangle {
  public:
    Rectangle(double widthValue, double heightValue);
    Rectangle(double widthValue);
    Rectangle();
    void setValue(double _width, double _height);
    double getArea() const {
      return width * height;
    }
    void printInfo() const {
      cout << "width: " << width << "\theight: " << height << "\tarea: " << getArea() << endl;
      return ;
    }
  private:
    double width;
    double height;
};

int main() {
  Rectangle rect1(3.0, 4.0), rect2(3.0);
  rect1.setValue(2.0, 3.0);
  rect2.setValue(5.0, 4.0);

  rect1.printInfo();
  rect2.printInfo();
}

Rectangle::Rectangle(double widthValue, double heightValue):width(widthValue), height(heightValue) {
}
Rectangle::Rectangle(double widthValue):width(widthValue), height(5.0) {
}
Rectangle::Rectangle():width(5.0), height(5.0) {
}

void Rectangle::setValue(double _width, double _height) {
  width = _width;
  height = _height;
  return;
}