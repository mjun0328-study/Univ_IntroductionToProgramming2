#include <iostream>
using namespace std;

class Vector2D {
  public:
    int getX() const {
      return x;
    }
    int getY() const {
      return y;
    }
    void set(int _x, int _y);
    friend int operator *(const Vector2D& vector1, const Vector2D& vector2);
  private:
    int x;
    int y;
};

void Vector2D::set(int _x, int _y) {
  x = _x;
  y = _y;
}

int operator *(const Vector2D& vector1, const Vector2D& vector2) {
  return (vector1.x * vector2.x) + (vector1.y * vector2.y);
}

int main() {
  char ans;
  do {
    int x, y;
    Vector2D vector1, vector2;
    cout << "Enter x of vector1 : ";
    cin >> x;
    cout << "Enter y of vector1 : ";
    cin >> y;
    vector1.set(x, y);
    cout << "Enter x of vector2 : ";
    cin >> x;
    cout << "Enter y of vector2 : ";
    cin >> y;
    vector2.set(x, y);
    cout << "The dot product of two-dimensional vectors is " << vector1 * vector2 << endl
         << "Again? (Y/y) or type any others to quit: ";
    cin >> ans;
  }while(ans == 'Y' || ans == 'y');
  return 0;
}