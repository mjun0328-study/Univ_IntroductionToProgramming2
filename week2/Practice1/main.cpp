#include <iostream>
using namespace std;

int main() {
  bool isPrimary[101];
  for(int i=1; i<=100; i++) {
    isPrimary[i] = true;
  }
  isPrimary[0] = false;
  isPrimary[1] = false;

  for(int i=2; i<=100; i++) {
    if(isPrimary[i]) {
      int multi = 2;
      while(i * multi <= 100) {
        isPrimary[i*multi] = false;
        multi++;
      }
    }
  }

  for(int i=3; i<=100; i++) {
    if(isPrimary[i]) {
      cout << i << " ";
    }
  }

  return 0;
}