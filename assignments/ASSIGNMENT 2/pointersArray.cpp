#include <iostream>
using namespace sdt;

int main(){

 int numberArray[5];
 
 int* pPointer = nullptr;

 *pPointer = 10;

 *pPointer = &numberArray[2];
 *pPointer = 30;
 pPointer = numbersArray + 3;
 *pPointer = numbersArray;

 (*p+4) = 50;

 for(int n = 0; n < 5; n++) {
    cout << numbersArray[n] << ", ";
 }
 return 0;
}
