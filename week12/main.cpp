#include <iostream>
#include <vector>
using namespace std;

template <class T>

class Set {
  private:
    vector<T> items;
  
  public:
    void addItem(const T& item) {
      bool isExist = false;
      for(int i=0; i<items.size(); i++) {
        if(items.at(i) == item) {
          isExist = true;
          break;
        }
      }
      if(!isExist) items.push_back(item);
    }

    int getSize() const {
      return items.size();
    }

    T* toArray() const {
      T* array = new T[items.size()];
      for(int i=0; i<items.size(); i++) array[i] = items[i];

      return array;
    }
};

int main() {
  Set<int> intSet;

  intSet.addItem(1);
  intSet.addItem(2);
  intSet.addItem(2);
  intSet.addItem(3);

  cout << "The Number of Items: " << intSet.getSize() << endl;

  int* intArray = intSet.toArray();
  cout << "Items in the set: ";
  for(int i=0; i<intSet.getSize(); i++) {
    cout << intArray[i] << " ";
  }
  cout << endl;
  delete[] intArray;


  Set<string> strSet;

  strSet.addItem("A");
  strSet.addItem("B");
  strSet.addItem("C");
  strSet.addItem("C");

  cout << "The Number of Items: " << strSet.getSize() << endl;

  string* strArray = strSet.toArray();
  cout << "Items in the set: ";
  for(int i=0; i<strSet.getSize(); i++) {
    cout << strArray[i] << " ";
  }
  cout << endl;
  delete[] strArray;
}