// Pair.cpp
// Christopher and Darren
// Implement member functions here

#include "Pair.h"

// implementing default constructor
template <typename T>
Pair<T>::Pair() {
   first = 0;
   second = 0;
}

// implementing parameterized constructor
template <typename T>
Pair<T>::Pair(T f, T s) {
   first = f;
   second = s;
}