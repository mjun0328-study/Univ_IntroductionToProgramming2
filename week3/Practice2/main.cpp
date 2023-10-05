#include <iostream>
using namespace std;

void compare(int& x, int& y) {
  if(x > y) {
    int buffer = x;
    x = y;
    y = buffer;
  }
  return;
}

void sort(int& a, int& b, int& c) {
  compare(a, b);
  compare(a, c);
  compare(b, c);
}

int main() {
  int x, y, z;
  char ans;
  
  do {
    cout << "Enter three integers: ";
    cin >> x >> y >> z;
    sort(x,y,z);
    cout << x << " " << y << " " << z << endl;
    cout << "Again? (Y/y) or type any others to quit: ";
    cin >> ans;
  }while(ans == 'y' || ans == 'Y');
  return 0;
}