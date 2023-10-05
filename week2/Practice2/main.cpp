#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  fstream inputStream;
  inputStream.open("../file.txt");

  string str;
  while(true) {
    inputStream >> str;
    if(str == "hate") str = "love";
    cout << str << endl;

    if(inputStream.eof()) break;
  }

  inputStream.close();
  return 0;
}