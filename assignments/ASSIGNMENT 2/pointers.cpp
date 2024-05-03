#include <iostream>
using namespace std;

int  main () {
int forstVariable;
int secondVariable;

int* pPointer = nul ptr;

// assigning point with the address of nthe firstVariable
pPointer = &firstVariable;
// indirection assigning
*pPointer = 10;

// assigning pointer wth the addressos 2ndVariable
pPointer = &secondndVariable;
*pPointer = 20;

cout << "firstVariable value is " << firstVariable << '\n';
cout << " secondVariable value is " << secondVariable << '\n';

return 0;
}
