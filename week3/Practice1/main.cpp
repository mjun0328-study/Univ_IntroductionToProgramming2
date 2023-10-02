#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void getHighScores(string players[], int scores[]) {
  int max = -1;
  for(int i=0; i<5; i++) {
    fstream file;
    file.open("../scores.txt");
    string player;
    int score;
    string playerHighest;
    int scoreHighest = -1;

    while(file >> player) {
      file >> score;
      if(score > scoreHighest && (i == 0 || score < max)) {
        playerHighest = player;
        scoreHighest = score;
      }
    }
    max = scoreHighest;
    players[i] = playerHighest;
    scores[i] = scoreHighest;
  }
  return;
}

int main() {
  string players[5];
  int scores[5];

  getHighScores(players, scores);

  for(int i=0; i<5; i++) {
    cout << players[i] << " " << scores[i] << endl;
  }

  return 0;
}