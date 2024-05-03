#include <iostream>
using namespace sdt;

int main() {

 int numberOfElements = 0;
 int dynamicArray = nullptr;

 dynamicArray = new int[numberOfElements];
 
 if (dynamicArray == nullptr){
   cout << " Error: memory could not be allocatd";
  }
 else {
     for(int i = 0; i < numberOfElements; i++) {
        cout << " Enter number: ";
        cin >> dynamicArray[i];
    }
    
    cout << " you have entered: ";
    
    for (int j = 0; j < numberOfElements; j++) {
        cout << dynamicArray[j] << ", ";

    }
       delete [] dynamicArray;
 }
    return 0;
}
