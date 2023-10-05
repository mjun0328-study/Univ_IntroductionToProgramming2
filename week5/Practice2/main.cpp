#include <iostream>
// #include <cstdlib>
using namespace std;

class HotDogStand {
  public:
    HotDogStand(int newID, int newNumSold);
    HotDogStand();
    int GetID() const {
      return ID;
    }
    void SetID(int newID);
    void JustSold();
    int GetNumSold() const {
      return numSold;
    }
    static int getTotalSold();
  private:
    static int totalSold;
    int numSold;
    int ID;
};

int main() {
  HotDogStand s1(1,0), s2(2,0), s3(3,0);

  s1.JustSold();
  s2.JustSold();
  s1.JustSold();

  cout << "Stand " << s1.GetID() << " sold " << s1.GetNumSold() << endl;
  cout << "Stand " << s2.GetID() << " sold " << s2.GetNumSold() << endl;
  cout << "Stand " << s3.GetID() << " sold " << s3.GetNumSold() << endl;
  cout << endl;

  s3.JustSold();
  s1.JustSold();

  cout << "Stand " << s1.GetID() << " sold " << s1.GetNumSold() << endl;
  cout << "Stand " << s2.GetID() << " sold " << s2.GetNumSold() << endl;
  cout << "Stand " << s3.GetID() << " sold " << s3.GetNumSold() << endl;
  cout << "Total sold = " << s1.getTotalSold() << endl;
  cout << endl;
  return 0;
}

int HotDogStand::totalSold = 0;

HotDogStand::HotDogStand(int newID, int newNumSold) {
  ID = newID;
  numSold = newNumSold;
  totalSold += newNumSold;
}
HotDogStand::HotDogStand() {
  ID = 0;
  numSold = 0;
}

void HotDogStand::SetID(int newID) {
  ID = newID;
}

void HotDogStand::JustSold() {
  numSold++;
  totalSold++;
  return;
}

int HotDogStand::getTotalSold() {
  return totalSold;
}