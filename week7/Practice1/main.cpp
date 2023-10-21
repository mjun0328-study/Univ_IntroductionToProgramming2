#include <iostream>
#include <string>
using namespace std;

class DynamicStringArray {
  public:
    DynamicStringArray();
    DynamicStringArray(DynamicStringArray& originArr);
    ~DynamicStringArray() {
      delete [] dynamicArray;
    }
    int getSize() const {
      return size;
    }
    void addEntry(string elem);
    bool deleteEntry(string elem);
    string getEntry(int index);
    DynamicStringArray& operator=(const DynamicStringArray& rightSize);
  private:
    string *dynamicArray;
    int size;

};

DynamicStringArray::DynamicStringArray() {
  size = 0;
  dynamicArray = nullptr;
}

DynamicStringArray::DynamicStringArray(DynamicStringArray& originArr) {
  int originSize = originArr.getSize();
  for(int i=0; i<originSize; i++) {
    this->addEntry(originArr.getEntry(i));
  }
}

void DynamicStringArray::addEntry(string elem) {
  string *newArr = new string[++size];
  for(int i=0; i<size-1; i++) {
    newArr[i] = dynamicArray[i];
  }
  newArr[size-1] = elem;
  delete [] dynamicArray;
  dynamicArray = newArr;
}

bool DynamicStringArray::deleteEntry(string elem) {
  bool isFound = false;
  string *newArr = new string[size];
  for(int i=0; i<size; i++) {
    if(dynamicArray[i] == elem) {
      isFound = true;
    }else if(isFound) {
      newArr[i-1] = dynamicArray[i];
    }else if(i != size-1) {
      newArr[i] = dynamicArray[i];
    }
  }
  if(isFound) {
    delete [] dynamicArray;
    dynamicArray = newArr;
    size--;
  }
  return isFound;
}

string DynamicStringArray::getEntry(int index) {
  if(index < size && index >= 0) {
    return dynamicArray[index];
  }else {
    return nullptr;
  }
}

DynamicStringArray& DynamicStringArray::operator=(const DynamicStringArray& rightSide) {
  if(this == &rightSide) {
    return *this;
  }else {
    delete [] dynamicArray;
    if(rightSide.size == 0) {
      dynamicArray = nullptr;
    }else {
      dynamicArray = new string[rightSide.size];
      for(int i=0; i<rightSide.size; i++) {
        dynamicArray[i] = rightSide.dynamicArray[i];
      }
    }
    size = rightSide.size;
    return *this;
  }
}


int main()
{
	DynamicStringArray names;

	// List of names
	names.addEntry("Frank");
	names.addEntry("Wiggum");
	names.addEntry("Nahasapeemapetilon");
	names.addEntry("Quimby");
	names.addEntry("Flanders");

	// Output list
	cout << "List of names:" << endl;
	for (int i = 0; i < names.getSize(); i++)
		cout << names.getEntry(i) << endl;
	cout << endl;

	// Add and remove some names
	names.addEntry("Spuckler");
	cout << "After adding a name:" << endl;
	for (int i = 0; i < names.getSize(); i++)
		cout << names.getEntry(i) << endl;
	cout << endl;

	names.deleteEntry("Nahasapeemapetilon");
	cout << "After removing a name:" << endl;
	for (int i = 0; i < names.getSize(); i++)
		cout << names.getEntry(i) << endl;
	cout << endl;

	names.deleteEntry("Skinner");
	cout << "After removing a name that isn't on the list:" << endl;
	for (int i = 0; i < names.getSize(); i++)
		cout << names.getEntry(i) << endl;
	cout << endl;

	names.addEntry("Muntz");
	cout << "After adding another name:" << endl;
	for (int i = 0; i < names.getSize(); i++)
		cout << names.getEntry(i) << endl;
	cout << endl;

	// Remove all of the names by repeatedly deleting the last one
	while (names.getSize() > 0) {
		names.deleteEntry(names.getEntry(names.getSize() - 1));
	}

	cout << "After removing all of the names:" << endl;
	for (int i = 0; i < names.getSize(); i++)
		cout << names.getEntry(i) << endl;
	cout << endl;

	names.addEntry("Burns");
	names.addEntry("Yap");
	cout << "After adding a name:" << endl;
	for (int i = 0; i < names.getSize(); i++)
		cout << names.getEntry(i) << endl;
	cout << endl;

	
	cout << "Testing copy constructor" << endl;
	DynamicStringArray names2(names);
	// Remove Burns from names
	names.deleteEntry("Burns");
	cout<< "Original names: " << endl;
	for (int i = 0; i < names.getSize(); i++)
		cout << names.getEntry(i) << endl;
	cout << "Copied names:" << endl;
	for (int i = 0; i < names2.getSize(); i++)
		cout << names2.getEntry(i) << endl;
	cout << endl;

	cout << "Testing assignment" << endl;
	DynamicStringArray names3 = names2;
	// Remove Burns from names2
	names2.deleteEntry("Burns");
	cout<< "Original names: " << endl;
	for (int i = 0; i < names2.getSize(); i++)
		cout << names2.getEntry(i) << endl;
	cout << "Copied names:" << endl;
	for (int i = 0; i < names3.getSize(); i++)
		cout << names3.getEntry(i) << endl;
	cout << endl;

	cout << "Enter a character to exit." << endl;
	char wait;
	cin >> wait;
	return 0;
}