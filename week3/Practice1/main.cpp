#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string getHighScore(int& scoreH, string& playerH) {
  fstream file;
  file.open("../scores.txt");

  int score;
  string player;
  while(file >> player) {
    file >> score;
    if(score > scoreH) {
      scoreH = score;
      playerH = player;
    }
  }
  return to_string(scoreH) + " " + playerH;
}

int main() {
  string highestPlayer;
  int highestScore = 0;
  
  cout << getHighScore(highestScore, highestPlayer);
}