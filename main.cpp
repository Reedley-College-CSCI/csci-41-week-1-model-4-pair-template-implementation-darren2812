// Christopher and Darren
#include "Pair.h"
#include "Pair.cpp"
#include <iostream>
#include <string>
using namespace std;

int main() {
   Pair<int> intConstructor(1, 2);
   cout << "The sum of the two integers is " << intConstructor.getFirst() + intConstructor.getSecond()
	    << "." << endl;

   Pair<string> stringConstructor("apple", "banana");
   cout << stringConstructor.getFirst() << " " << stringConstructor.getSecond() << endl;

   return 0;
}
