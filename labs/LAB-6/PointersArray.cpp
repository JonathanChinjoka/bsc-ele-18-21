#include <iostream>

using namespace std;

int main()
{
    int numbersArray[5];
    int* pPointer = nullptr;

    //Assign the address of the first element to the pointer
    pPointer = numbersArray;
    *pPointer = 10; //assign a value to the first element

    /*increment the pointer using the arithmentic
    to assign the address of the second element to the pointer*/
    pPointer++;
    *pPointer = 20; //assign value to second element.

    //assign address 
    pPointer = &numbersArray[2];
    *pPointer = 30; //assigning value to the third element

    /*assign the address of the third element to the pointer
    using pointer arithimetic*/
    pPointer = numbersArray + 3;
    *pPointer = 40;

    pPointer = numbersArray;
    *(pPointer + 4)=50;
    for (int n =0; n<5; n++){
        cout <<"numberArrays: "<<numbersArray[n]<<", ";
    }

    return 0;
}