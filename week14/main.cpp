#include <iostream>
#include <string>
#include <map>
#include <fstream>

using namespace std;

struct Ratings {
  int num;
  int sum;
};

int main() {
  fstream file;
  file.open("../movie.txt");

  map<string, Ratings> movies;

  string name;
  int rating;
  while(file >> name >> rating) {
    if(movies.find(name) == movies.end()) {
      movies[name] = {1, rating};
    }else {
      movies[name].num++;
      movies[name].sum += rating;
    }
  }

  for(auto p = movies.begin(); p != movies.end(); p++) {
    int num = p->second.num;
    int sum = p->second.sum;
    cout << p->first << ": " << num << " reviewers. Average of " << (static_cast<double>(sum) / num) << "/5" << endl;
  }

  file.close();
  return 0;
}